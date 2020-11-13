#include "EnergybalanceAuxiliary.h"
EnergybalanceAuxiliary::EnergybalanceAuxiliary() { }

double EnergybalanceAuxiliary::getminTair() {return this-> minTair; }
double EnergybalanceAuxiliary::getmaxTair() {return this-> maxTair; }
double EnergybalanceAuxiliary::getsolarRadiation() {return this-> solarRadiation; }
double EnergybalanceAuxiliary::getvaporPressure() {return this-> vaporPressure; }
double EnergybalanceAuxiliary::getextraSolarRadiation() {return this-> extraSolarRadiation; }
double EnergybalanceAuxiliary::gethslope() {return this-> hslope; }
double EnergybalanceAuxiliary::getplantHeight() {return this-> plantHeight; }
double EnergybalanceAuxiliary::getwind() {return this-> wind; }
double EnergybalanceAuxiliary::getdeficitOnTopLayers() {return this-> deficitOnTopLayers; }
double EnergybalanceAuxiliary::getVPDair() {return this-> VPDair; }
double EnergybalanceAuxiliary::getnetRadiation() {return this-> netRadiation; }
double EnergybalanceAuxiliary::getnetOutGoingLongWaveRadiation() {return this-> netOutGoingLongWaveRadiation; }
double EnergybalanceAuxiliary::getnetRadiationEquivalentEvaporation() {return this-> netRadiationEquivalentEvaporation; }
double EnergybalanceAuxiliary::getenergyLimitedEvaporation() {return this-> energyLimitedEvaporation; }
double EnergybalanceAuxiliary::getsoilEvaporation() {return this-> soilEvaporation; }

void EnergybalanceAuxiliary::setminTair(double _minTair) { this->minTair = _minTair; }
void EnergybalanceAuxiliary::setmaxTair(double _maxTair) { this->maxTair = _maxTair; }
void EnergybalanceAuxiliary::setsolarRadiation(double _solarRadiation) { this->solarRadiation = _solarRadiation; }
void EnergybalanceAuxiliary::setvaporPressure(double _vaporPressure) { this->vaporPressure = _vaporPressure; }
void EnergybalanceAuxiliary::setextraSolarRadiation(double _extraSolarRadiation) { this->extraSolarRadiation = _extraSolarRadiation; }
void EnergybalanceAuxiliary::sethslope(double _hslope) { this->hslope = _hslope; }
void EnergybalanceAuxiliary::setplantHeight(double _plantHeight) { this->plantHeight = _plantHeight; }
void EnergybalanceAuxiliary::setwind(double _wind) { this->wind = _wind; }
void EnergybalanceAuxiliary::setdeficitOnTopLayers(double _deficitOnTopLayers) { this->deficitOnTopLayers = _deficitOnTopLayers; }
void EnergybalanceAuxiliary::setVPDair(double _VPDair) { this->VPDair = _VPDair; }
void EnergybalanceAuxiliary::setnetRadiation(double _netRadiation) { this->netRadiation = _netRadiation; }
void EnergybalanceAuxiliary::setnetOutGoingLongWaveRadiation(double _netOutGoingLongWaveRadiation) { this->netOutGoingLongWaveRadiation = _netOutGoingLongWaveRadiation; }
void EnergybalanceAuxiliary::setnetRadiationEquivalentEvaporation(double _netRadiationEquivalentEvaporation) { this->netRadiationEquivalentEvaporation = _netRadiationEquivalentEvaporation; }
void EnergybalanceAuxiliary::setenergyLimitedEvaporation(double _energyLimitedEvaporation) { this->energyLimitedEvaporation = _energyLimitedEvaporation; }
void EnergybalanceAuxiliary::setsoilEvaporation(double _soilEvaporation) { this->soilEvaporation = _soilEvaporation; }