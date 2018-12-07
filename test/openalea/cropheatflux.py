import numpy as np 
from copy import copy
from math import *

def cropheatflux(netRadiationEquivalentEvaporation=638.142,
                 soilHeatFlux=188.817,
                 potentialTranspiration=1.413):
    """


    CropHeatFlux Model
    Author: Pierre Martre
    Reference: abModelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract: It is calculated from net Radiation, soil heat flux and potential transpiration 

    """
    cropHeatFlux = netRadiationEquivalentEvaporation - soilHeatFlux - potentialTranspiration
    return  cropHeatFlux
