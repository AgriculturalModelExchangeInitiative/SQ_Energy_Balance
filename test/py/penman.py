import numpy as np 
from copy import copy
from math import *

def penman(evapoTranspirationPriestlyTaylor=449.367,
           hslope=0.584,
           VPDair=2.19,
           psychrometricConstant=0.66,
           Alpha=1.5,
           lambdaV=2.454,
           rhoDensityAir=1.225,
           specificHeatCapacityAir=0.00101,
           conductance=598.685):
    """


    Penman Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract: This method is used when wind and vapor pressure daily data are available 
        

    """
    evapoTranspirationPenman = evapoTranspirationPriestlyTaylor / Alpha + 1000 * ((rhoDensityAir * specificHeatCapacityAir * VPDair * conductance) / (lambdaV * (hslope + psychrometricConstant)))
    return  evapoTranspirationPenman
