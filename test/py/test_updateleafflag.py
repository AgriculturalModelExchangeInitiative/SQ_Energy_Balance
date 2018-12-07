'Test generation'

from updateleafflag import *
from math import *
import numpy as np



def test_test_wheat1():
    params= updateleafflag(
    phase = 3,
    calendarDates = ['21/3/2007', '27/3/2007', '30/3/2007', '5/4/2007', '9/4/2007', '10/4/2007', '11/4/2007', '12/4/2007', '14/4/2007', '15/4/2007', '19/4/2007', '24/4/2007'],
    calendarCumuls = [0.0, 112.330110409888, 157.969706915664, 280.570678654207, 354.582294511779, 378.453152853726, 402.042720581446, 424.98704708663, 467.23305195298, 487.544313430698, 560.665248444002, 646.389617338974],
    calendarMoments = ['Sowing', 'Emergence', 'EndVernalisation', 'MainShootPlus1Tiller', 'FloralInitiation', 'MainShootPlus2Tiller', 'TerminalSpikelet', 'PseudoStemErection', 'MainShootPlus3Tiller', '1stNodeDetectable', '2ndNodeDetectable', 'FlagLeafJustVisible'],
    HasFlagLeafLiguleAppeared = 0,
     )
    HasFlagLeafLiguleAppeared_estimated = params[0]
    HasFlagLeafLiguleAppeared_computed = 1
    assert (HasFlagLeafLiguleAppeared_estimated == HasFlagLeafLiguleAppeared_computed)