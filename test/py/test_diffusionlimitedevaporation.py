'Test generation'

from diffusionlimitedevaporation import *
from math import *
import numpy as np



def test_test1():
    params= diffusionlimitedevaporation(
    deficitOnTopLayers = 5341,
    soilDiffusionConstant = 4.2,
     )
    diffusionLimitedEvaporation_estimated = round(params, 3)
    diffusionLimitedEvaporation_computed =  6605.505
    assert (diffusionLimitedEvaporation_estimated == diffusionLimitedEvaporation_computed)