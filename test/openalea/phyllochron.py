import numpy as np 
from copy import copy
from math import *

def phyllochron(FixPhyll=5.0,
                LeafNumber=0.0,
                Lincr=8.0,
                Ldecr=10.0,
                Pdecr=0.4,
                Pincr=1.5,
                LAI=0.0,
                PTQ=0.0,
                GAI=0.0,
                pastMaxAI=0.0,
                Kl=0.45,
                aPTQ=0.842934,
                PhylPTQ1=20.0,
                P=120.0,
                choosePhyllUse='Default'):
    """


    Phyllochron Model
    Author: Pierre Martre
    Reference: Modeling development phase in the 
                Wheat Simulation Model SiriusQuality.
                See documentation at http://www1.clermont.inra.fr/siriusquality/?page_id=427
    Institution: INRA Montpellier
    Abstract: Calculate different types of phyllochron 

    """
    if choosePhyllUse =="Default":
        if (LeafNumber < Ldecr): Phyllochron = FixPhyll * Pdecr
        elif (LeafNumber >= Ldecr and LeafNumber < Lincr): Phyllochron = Fixphyll
        else: Phyllochron = FixPhyll * Pincr
    if choosePhyllUse =="PTQ":
        pastMaxAI1 = pastMaxAI
        GAI = max(pastMaxAI1,GAI)
        pastMaxAI = GAI
        if (GAI > 0.0): Phyllochron = PhylPTQ1 * ((GAI * Kl) / (1 - exp(-Kl * GAI))) / (PTQ + aPTQ)
        else: Phyllochron = PhylPTQ1
    if choosePhyllUse == "Test":
        if (LeafNumber < Ldecr): Phyllochron = P * Pdecr
        elif (LeafNumber >= Ldecr and LeafNumber < Lincr): Phyllochron = P
        else: Phyllochron = P * Pincr
    return  Phyllochron, pastMaxAI
