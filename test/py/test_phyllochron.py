'Test generation'

from phyllochron import *
from math import *
import numpy as np



def test_test_wheat1():
    params= phyllochron(
    Pincr = 1.25,
    GAI = 0.279874189539498,
    choosePhyllUse = "Default",
    FixPhyll = 91.2,
    Pdecr = 0.4,
    Ldecr = 3,
    Lincr = 8,
     )
    Phyllochron_estimated = round(params[0], 2)
    Phyllochron_computed = 36.48
    assert (Phyllochron_estimated == Phyllochron_computed)
    pastMaxAI_estimated = round(params[1], 2)
    pastMaxAI_computed = 0
    assert (pastMaxAI_estimated == pastMaxAI_computed)