#ifndef _EnergybalanceAuxiliary_
#define _EnergybalanceAuxiliary_
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
using namespace std;
class EnergybalanceAuxiliary
{
    private:
        double minTair;
        double maxTair;
        double solarRadiation;
        double vaporPressure;
        double extraSolarRadiation;
        double hslope;
        double plantHeight;
        double wind;
        double deficitOnTopLayers;
        double VPDair;
        double netRadiation;
        double netOutGoingLongWaveRadiation;
        double netRadiationEquivalentEvaporation;
        double energyLimitedEvaporation;
        double soilEvaporation;
    public:
        EnergybalanceAuxiliary();
        double getminTair();
        void setminTair(double _minTair);
        double getmaxTair();
        void setmaxTair(double _maxTair);
        double getsolarRadiation();
        void setsolarRadiation(double _solarRadiation);
        double getvaporPressure();
        void setvaporPressure(double _vaporPressure);
        double getextraSolarRadiation();
        void setextraSolarRadiation(double _extraSolarRadiation);
        double gethslope();
        void sethslope(double _hslope);
        double getplantHeight();
        void setplantHeight(double _plantHeight);
        double getwind();
        void setwind(double _wind);
        double getdeficitOnTopLayers();
        void setdeficitOnTopLayers(double _deficitOnTopLayers);
        double getVPDair();
        void setVPDair(double _VPDair);
        double getnetRadiation();
        void setnetRadiation(double _netRadiation);
        double getnetOutGoingLongWaveRadiation();
        void setnetOutGoingLongWaveRadiation(double _netOutGoingLongWaveRadiation);
        double getnetRadiationEquivalentEvaporation();
        void setnetRadiationEquivalentEvaporation(double _netRadiationEquivalentEvaporation);
        double getenergyLimitedEvaporation();
        void setenergyLimitedEvaporation(double _energyLimitedEvaporation);
        double getsoilEvaporation();
        void setsoilEvaporation(double _soilEvaporation);

};
#endif