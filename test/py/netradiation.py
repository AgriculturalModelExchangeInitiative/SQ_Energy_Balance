import numpy as np 
from copy import copy
from math import *

def netradiation(minTair=0.7,
                 maxTair=7.2,
                 albedoCoefficient=0.23,
                 stefanBoltzman=4.903e-09,
                 elevation=0.0,
                 solarRadiation=3.0,
                 vaporPressure=6.1,
                 extraSolarRadiation=11.7):
    """


    NetRadiation Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA Montpellier
    Abstract: It is calculated at the surface of the canopy and is givenby the difference between incoming and outgoing radiation of both short 
                     and long wavelength radiation 

    """
    Nsr = (1 - albedoCoefficient) * solarRadiation
    clearSkySolarRadiation = (0.75 + 2 * pow(10, -5) * elevation) * extraSolarRadiation
    averageT = (pow(maxTair + 273.16, 4) + pow(minTair + 273.16, 4)) / 2
    surfaceEmissivity = (0.34 - 0.14 * sqrt(vaporPressure / 10))
    cloudCoverFactor = (1.35 * (solarRadiation / clearSkySolarRadiation) - 0.35)
    Nolr = stefanBoltzman * averageT * surfaceEmissivity * cloudCoverFactor
    netRadiation= Nsr - Nolr
    netOutGoingLongWaveRadiation = Nolr
    return  netRadiation, netOutGoingLongWaveRadiation
