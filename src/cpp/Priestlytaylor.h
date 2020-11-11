#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Priestlytaylor
{
    private:
        double psychrometricConstant;
        double Alpha;
    public:
        Priestlytaylor();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getpsychrometricConstant();
        void setpsychrometricConstant(double _psychrometricConstant);
        double getAlpha();
        void setAlpha(double _Alpha);

};