import numpy as np 
from copy import copy
from math import *

def conductance(vonKarman=0.42,
                heightWeatherMeasurements=2.0,
                zm=0.13,
                zh=0.013,
                d=0.67,
                plantHeight=0.0,
                wind=124000.0):
    """


    Conductance Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract: The boundary layer conductance is expressed as the wind speed profile above the
            canopy and the canopy structure. The approach does not take into account buoyancy
            effects. 

    """
    h = max(10, plantHeight) / 100.0
    conductance = (wind * pow(vonKarman, 2)) / (log((heightWeatherMeasurements - d * h) / (zm * h)) * log((heightWeatherMeasurements - d * h) / (zh * h)))
    return  conductance
