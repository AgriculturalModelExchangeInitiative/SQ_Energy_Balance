import numpy as np 
from copy import copy
from math import *

def canopytemperature(minTair=0.7,
                      maxTair=7.2,
                      cropHeatFlux=447.912,
                      conductance=598.685,
                      lambdaV=2.454,
                      rhoDensityAir=1.225,
                      specificHeatCapacityAir=0.00101):
    """


    CanopyTemperature Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA/LEPSE Montpellier
    Abstract: It is calculated from the crop heat flux and the boundary layer conductance 

    """
    minCanopyTemperature = minTair + cropHeatFlux / ((rhoDensityAir * specificHeatCapacityAir * conductance / lambdaV) * 1000)
    maxCanopyTemperature = maxTair + cropHeatFlux / ((rhoDensityAir * specificHeatCapacityAir * conductance / lambdaV) * 1000)
    return  minCanopyTemperature, maxCanopyTemperature
