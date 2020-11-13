#ifndef _EnergybalanceRate_
#define _EnergybalanceRate_
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
using namespace std;
class EnergybalanceRate
{
    private:
        double evapoTranspirationPriestlyTaylor;
        double evapoTranspirationPenman;
        double evapoTranspiration;
        double potentialTranspiration;
        double soilHeatFlux;
        double cropHeatFlux;
    public:
        EnergybalanceRate();
        double getevapoTranspirationPriestlyTaylor();
        void setevapoTranspirationPriestlyTaylor(double _evapoTranspirationPriestlyTaylor);
        double getevapoTranspirationPenman();
        void setevapoTranspirationPenman(double _evapoTranspirationPenman);
        double getevapoTranspiration();
        void setevapoTranspiration(double _evapoTranspiration);
        double getpotentialTranspiration();
        void setpotentialTranspiration(double _potentialTranspiration);
        double getsoilHeatFlux();
        void setsoilHeatFlux(double _soilHeatFlux);
        double getcropHeatFlux();
        void setcropHeatFlux(double _cropHeatFlux);

};
#endif