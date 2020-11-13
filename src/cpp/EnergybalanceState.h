#ifndef _EnergybalanceState_
#define _EnergybalanceState_
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
using namespace std;
class EnergybalanceState
{
    private:
        double diffusionLimitedEvaporation;
        double conductance;
        double minCanopyTemperature;
        double maxCanopyTemperature;
    public:
        EnergybalanceState();
        double getdiffusionLimitedEvaporation();
        void setdiffusionLimitedEvaporation(double _diffusionLimitedEvaporation);
        double getconductance();
        void setconductance(double _conductance);
        double getminCanopyTemperature();
        void setminCanopyTemperature(double _minCanopyTemperature);
        double getmaxCanopyTemperature();
        void setmaxCanopyTemperature(double _maxCanopyTemperature);

};
#endif