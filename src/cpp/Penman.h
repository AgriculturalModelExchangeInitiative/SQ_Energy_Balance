#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Penman
{
    private:
        double psychrometricConstant;
        double Alpha;
        double lambdaV;
        double rhoDensityAir;
        double specificHeatCapacityAir;
    public:
        Penman();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getpsychrometricConstant();
        void setpsychrometricConstant(double _psychrometricConstant);
        double getAlpha();
        void setAlpha(double _Alpha);
        double getlambdaV();
        void setlambdaV(double _lambdaV);
        double getrhoDensityAir();
        void setrhoDensityAir(double _rhoDensityAir);
        double getspecificHeatCapacityAir();
        void setspecificHeatCapacityAir(double _specificHeatCapacityAir);

};