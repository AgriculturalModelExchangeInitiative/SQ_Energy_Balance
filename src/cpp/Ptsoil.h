#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Ptsoil
{
    private:
        double Alpha;
        double tau;
        double tauAlpha;
    public:
        Ptsoil();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getAlpha();
        void setAlpha(double _Alpha);
        double gettau();
        void settau(double _tau);
        double gettauAlpha();
        void settauAlpha(double _tauAlpha);

};