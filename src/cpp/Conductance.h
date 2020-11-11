#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
#include "EnergybalanceState.h"
#include "EnergybalanceRate.h"
#include "EnergybalanceAuxiliary.h"
using namespace std;
class Conductance
{
    private:
        double vonKarman;
        double heightWeatherMeasurements;
        double zm;
        double zh;
        double d;
    public:
        Conductance();
        void  Calculate_Model(EnergybalanceState& s, EnergybalanceState& s1, EnergybalanceRate& r, EnergybalanceAuxiliary& a);
        double getvonKarman();
        void setvonKarman(double _vonKarman);
        double getheightWeatherMeasurements();
        void setheightWeatherMeasurements(double _heightWeatherMeasurements);
        double getzm();
        void setzm(double _zm);
        double getzh();
        void setzh(double _zh);
        double getd();
        void setd(double _d);

};