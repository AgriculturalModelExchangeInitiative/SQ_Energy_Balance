#include "EnergybalanceState.h"
EnergybalanceState::EnergybalanceState() { }

double EnergybalanceState::getdiffusionLimitedEvaporation() {return this-> diffusionLimitedEvaporation; }
double EnergybalanceState::getconductance() {return this-> conductance; }
double EnergybalanceState::getminCanopyTemperature() {return this-> minCanopyTemperature; }
double EnergybalanceState::getmaxCanopyTemperature() {return this-> maxCanopyTemperature; }

void EnergybalanceState::setdiffusionLimitedEvaporation(double _diffusionLimitedEvaporation) { this->diffusionLimitedEvaporation = _diffusionLimitedEvaporation; }
void EnergybalanceState::setconductance(double _conductance) { this->conductance = _conductance; }
void EnergybalanceState::setminCanopyTemperature(double _minCanopyTemperature) { this->minCanopyTemperature = _minCanopyTemperature; }
void EnergybalanceState::setmaxCanopyTemperature(double _maxCanopyTemperature) { this->maxCanopyTemperature = _maxCanopyTemperature; }