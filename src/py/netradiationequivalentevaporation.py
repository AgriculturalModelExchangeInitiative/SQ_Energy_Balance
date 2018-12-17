import numpy as np 
from copy import copy
from math import *

def netradiationequivalentevaporation(lambdaV=2.454,
                                      netRadiation=1.566):
    """


    NetRadiationEquivalentEvaporation Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract:  It is given by dividing net radiation by latent heat of vaporization of water 

    """
    netRadiationEquivalentEvaporation = netRadiation / lambdaV * 1000.0
    return  netRadiationEquivalentEvaporation
