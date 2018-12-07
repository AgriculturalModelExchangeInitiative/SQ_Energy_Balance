'Test generation'

from cropheatflux import *
from math import *
import numpy as np



def test_test1():
    params= cropheatflux(
    soilHeatFlux = 188.817,
    potentialTranspiration =  1.413,
    netRadiationEquivalentEvaporation = 638.142,
     )
    cropHeatFlux_estimated = round(params, 3)
    cropHeatFlux_computed =  447.912
    assert (cropHeatFlux_estimated == cropHeatFlux_computed)