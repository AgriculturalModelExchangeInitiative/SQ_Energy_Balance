import numpy as np 
from copy import copy
from math import *

def diffusionlimitedevaporation(deficitOnTopLayers=5341.0,
                                soilDiffusionConstant=4.2):
    """


    DiffusionLimitedEvaporation Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA Montpellier
    Abstract: the evaporation from the diffusion limited soil 

    """
    if (deficitOnTopLayers / 1000.0 <= 0):
    	diffusionLimitedEvaporation = 8.3 * 1000
    else:
    	if (deficitOnTopLayers / 1000 < 25):
    		diffusionLimitedEvaporation = (2 * soilDiffusionConstant * soilDiffusionConstant / (deficitOnTopLayers / 1000.0)) * 1000.0
    	else:
    		diffusionLimitedEvaporation = 0
    return  diffusionLimitedEvaporation
