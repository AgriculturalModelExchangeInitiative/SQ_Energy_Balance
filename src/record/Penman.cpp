// @@tagdynamic@@
// @@tagdepends: vle.discrete-time @@endtagdepends

#include <vle/DiscreteTime.hpp>
namespace vd = vle::devs;
namespace vv = vle::value;
// Definition du namespace de la classe du modele
namespace record {
namespace Energybalance {
using namespace vle::discrete_time;
class Penman: public DiscreteTimeDyn {
public:
    Penman(const vd::DynamicsInit& atom, const vd::InitEventList& events) : DiscreteTimeDyn(atom, events)
    {
        // Ces parametres ont une valeur par defaut utilise si la condition n'est pas definie
        psychrometricConstant = (events.exist("psychrometricConstant")) ? vv::toDouble(events.get("psychrometricConstant")) : 0.66;
        Alpha = (events.exist("Alpha")) ? vv::toDouble(events.get("Alpha")) : 1.5;
        lambdaV = (events.exist("lambdaV")) ? vv::toDouble(events.get("lambdaV")) : 2.454;
        rhoDensityAir = (events.exist("rhoDensityAir")) ? vv::toDouble(events.get("rhoDensityAir")) : 1.225;
        specificHeatCapacityAir = (events.exist("specificHeatCapacityAir")) ? vv::toDouble(events.get("specificHeatCapacityAir")) : 0.00101;
        //  Variables gérées par ce composant
        evapoTranspirationPenman.init(this,"evapoTranspirationPenman", events);
        //  Variables gérées par un autre composant
        conductance.init(this,"conductance", events);
        evapoTranspirationPriestlyTaylor.init(this,"evapoTranspirationPriestlyTaylor", events);
        hslope.init(this,"hslope", events);
        VPDair.init(this,"VPDair", events);
    }
    /**
    * @brief Destructeur de la classe du modèle.
    **/
    virtual ~Penman() {};
    /**
    * @brief Methode de calcul effectuée à chaque pas de temps
    * @param time la date du pas de temps courant
    */
    virtual void compute(const vd::Time& /*time*/)
    {
        evapoTranspirationPenman = evapoTranspirationPriestlyTaylor() / Alpha + (1000.0d * (rhoDensityAir * specificHeatCapacityAir * VPDair() * conductance() / (lambdaV * (hslope() + psychrometricConstant))));
    }
private:
    //Variables d'etat
    /**
    * @brief  evapoTranspiration of Penman Monteith (g m-2 d-1)
    */
    Var evapoTranspirationPenman

    //Entrées
    /**
        * @brief conductance (m d-1)
        */
    Var conductance/**
        * @brief evapoTranspiration of Priestly Taylor  (g m-2 d-1)
        */
    Var evapoTranspirationPriestlyTaylor/**
        * @brief the slope of saturated vapor pressure temperature curve at a given temperature  (hPa °C-1)
        */
    Var hslope/**
        * @brief  vapour pressure density (hPa)
        */
    Var VPDair

    //Paramètres du modele
    /**
    * @brief psychrometric constant ()
    */
    double psychrometricConstant;
    /**
    * @brief Priestley-Taylor evapotranspiration proportionality constant ()
    */
    double Alpha;
    /**
    * @brief latent heat of vaporization of water ()
    */
    double lambdaV;
    /**
    * @brief Density of air ()
    */
    double rhoDensityAir;
    /**
    * @brief Specific heat capacity of dry air ()
    */
    double specificHeatCapacityAir;
};
}
}
DECLARE_DYNAMICS(record::Energybalance::Penman); // balise specifique VLE