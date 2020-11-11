#include "Netradiation.h"
#include "Netradiationequivalentevaporation.h"
#include "Priestlytaylor.h"
#include "Conductance.h"
#include "Diffusionlimitedevaporation.h"
#include "Penman.h"
#include "Ptsoil.h"
#include "Soilevaporation.h"
#include "Evapotranspiration.h"
#include "Soilheatflux.h"
#include "Potentialtranspiration.h"
#include "Cropheatflux.h"
#include "Canopytemperature.h"
using namespace std;

class EnergybalanceComponent
{
    private:
        double albedoCoefficient;
        double stefanBoltzman;
        double elevation;
        double lambdaV;
        double psychrometricConstant;
        double Alpha;
        double vonKarman;
        double heightWeatherMeasurements;
        double zm;
        double d;
        double zh;
        double soilDiffusionConstant;
        double rhoDensityAir;
        double specificHeatCapacityAir;
        double tau;
        double tauAlpha;
        int isWindVpDefined;
    public:
        EnergybalanceComponent();
        EnergybalanceComponent(const EnergybalanceComponent& copy);
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        void  Init(EnergybalanceState& s,EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getalbedoCoefficient();
        void setalbedoCoefficient(double _albedoCoefficient);
        double getstefanBoltzman();
        void setstefanBoltzman(double _stefanBoltzman);
        double getelevation();
        void setelevation(double _elevation);
        double getlambdaV();
        void setlambdaV(double _lambdaV);
        double getpsychrometricConstant();
        void setpsychrometricConstant(double _psychrometricConstant);
        double getAlpha();
        void setAlpha(double _Alpha);
        double getvonKarman();
        void setvonKarman(double _vonKarman);
        double getheightWeatherMeasurements();
        void setheightWeatherMeasurements(double _heightWeatherMeasurements);
        double getzm();
        void setzm(double _zm);
        double getd();
        void setd(double _d);
        double getzh();
        void setzh(double _zh);
        double getsoilDiffusionConstant();
        void setsoilDiffusionConstant(double _soilDiffusionConstant);
        double getrhoDensityAir();
        void setrhoDensityAir(double _rhoDensityAir);
        double getspecificHeatCapacityAir();
        void setspecificHeatCapacityAir(double _specificHeatCapacityAir);
        double gettau();
        void settau(double _tau);
        double gettauAlpha();
        void settauAlpha(double _tauAlpha);
        int getisWindVpDefined();
        void setisWindVpDefined(int _isWindVpDefined);

        Netradiation _Netradiation;
        Netradiationequivalentevaporation _Netradiationequivalentevaporation;
        Priestlytaylor _Priestlytaylor;
        Conductance _Conductance;
        Diffusionlimitedevaporation _Diffusionlimitedevaporation;
        Penman _Penman;
        Ptsoil _Ptsoil;
        Soilevaporation _Soilevaporation;
        Evapotranspiration _Evapotranspiration;
        Soilheatflux _Soilheatflux;
        Potentialtranspiration _Potentialtranspiration;
        Cropheatflux _Cropheatflux;
        Canopytemperature _Canopytemperature;

};