#include "EnergybalanceRate.h"
EnergybalanceRate::EnergybalanceRate() { }

double EnergybalanceRate::getevapoTranspirationPriestlyTaylor() {return this-> evapoTranspirationPriestlyTaylor; }
double EnergybalanceRate::getevapoTranspirationPenman() {return this-> evapoTranspirationPenman; }
double EnergybalanceRate::getevapoTranspiration() {return this-> evapoTranspiration; }
double EnergybalanceRate::getpotentialTranspiration() {return this-> potentialTranspiration; }
double EnergybalanceRate::getsoilHeatFlux() {return this-> soilHeatFlux; }
double EnergybalanceRate::getcropHeatFlux() {return this-> cropHeatFlux; }

void EnergybalanceRate::setevapoTranspirationPriestlyTaylor(double _evapoTranspirationPriestlyTaylor) { this->evapoTranspirationPriestlyTaylor = _evapoTranspirationPriestlyTaylor; }
void EnergybalanceRate::setevapoTranspirationPenman(double _evapoTranspirationPenman) { this->evapoTranspirationPenman = _evapoTranspirationPenman; }
void EnergybalanceRate::setevapoTranspiration(double _evapoTranspiration) { this->evapoTranspiration = _evapoTranspiration; }
void EnergybalanceRate::setpotentialTranspiration(double _potentialTranspiration) { this->potentialTranspiration = _potentialTranspiration; }
void EnergybalanceRate::setsoilHeatFlux(double _soilHeatFlux) { this->soilHeatFlux = _soilHeatFlux; }
void EnergybalanceRate::setcropHeatFlux(double _cropHeatFlux) { this->cropHeatFlux = _cropHeatFlux; }