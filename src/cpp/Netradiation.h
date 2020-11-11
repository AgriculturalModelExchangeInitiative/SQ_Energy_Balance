#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Netradiation
{
    private:
        double albedoCoefficient;
        double stefanBoltzman;
        double elevation;
    public:
        Netradiation();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getalbedoCoefficient();
        void setalbedoCoefficient(double _albedoCoefficient);
        double getstefanBoltzman();
        void setstefanBoltzman(double _stefanBoltzman);
        double getelevation();
        void setelevation(double _elevation);

};