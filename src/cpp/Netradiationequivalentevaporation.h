#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Netradiationequivalentevaporation
{
    private:
        double lambdaV;
    public:
        Netradiationequivalentevaporation();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getlambdaV();
        void setlambdaV(double _lambdaV);

};