'Test generation'

from registerzadok import *
from math import *
import numpy as np



def test_test_wheat1():
    params= registerzadok(
    slopeTSFLN = 0.9,
    calendarCumuls = [ 0.0, 112.330110409888,157.969706915664, 280.570678654207],
    calendarMoments = ['Sowing','Emergence','EndVernalisation','MainShootPlus1Tiller'],
    phase = 2,
    calendarDates = ['3/21/2007','27/3/2007','3/30/2007','5/4/2007'],
    TSFLN = 2.6,
     )
    hasZadokStageChanged_estimated = params[0]
    hasZadokStageChanged_computed = 0
    assert (hasZadokStageChanged_estimated == hasZadokStageChanged_computed)
    currentZadokStage_estimated = params[1]
    currentZadokStage_computed = "MainShootPlus1Tiller"
    assert (currentZadokStage_estimated == currentZadokStage_computed)