'Test generation'

from leafnumber import *
from math import *
import numpy as np



def test_test_wheat1():
    params= leafnumber(
    phase = 3,
    LeafNumber = 5.147163833893262,
    Leaf_tip_emerg = 10,
    Phyllochron = 91.2,
    SwitchMaize = 0,
     )
    LeafNumber_estimated = round(params[0], 2)
    LeafNumber_computed = 5.41
    assert (LeafNumber_estimated == LeafNumber_computed)
    Ntip_estimated = round(params[1], 2)
    Ntip_computed = 0
    assert (Ntip_estimated == Ntip_computed)