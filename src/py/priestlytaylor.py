import numpy as np 
from copy import copy
from math import *

def priestlytaylor(netRadiationEquivalentEvaporation=638.142,
                   hslope=0.584,
                   psychrometricConstant=0.66,
                   Alpha=1.5):
    """


    evapoTranspirationPriestlyTaylor  Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA Montpellier
    Abstract: Calculate Energy Balance 

    """
    evapoTranspirationPriestlyTaylor = max((Alpha * hslope * (netRadiationEquivalentEvaporation) / (hslope + psychrometricConstant)), 0)
    return  evapoTranspirationPriestlyTaylor
