import numpy as np 
from copy import copy
from math import *

def evapotranspiration(isWindVpDefined=1,
                       evapoTranspirationPriestlyTaylor=449.367,
                       evapoTranspirationPenman=830.958):
    """


    Evapotranspiration Model
    Author: Pierre Martre
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Institution: INRA Montpellier
    Abstract: According to the availability of wind and/or vapor pressure daily data, the
            SiriusQuality2 model calculates the evapotranspiration rate using the Penman (if wind
            and vapor pressure data are available) (Penman 1948) or the Priestly-Taylor
            (Priestley and Taylor 1972) method 

    """
    if (isWindVpDefined == 1):
        evapoTranspiration = evapoTranspirationPenman
    else:
        evapoTranspiration = evapoTranspirationPriestlyTaylor
    return  evapoTranspiration
