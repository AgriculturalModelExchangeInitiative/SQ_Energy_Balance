import numpy as np 
from copy import copy
from math import *

def soilheatflux(netRadiationEquivalentEvaporation=638.142,
                 tau=0.9983,
                 soilEvaporation=448.24):
    """


    SoilHeatFlux Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract: The available energy in the soil 

    """
    soilHeatFlux = tau * netRadiationEquivalentEvaporation - soilEvaporation
    return  soilHeatFlux
