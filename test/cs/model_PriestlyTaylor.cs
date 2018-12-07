public class PriestlyTaylor
{
    public double evapoTranspirationPriestlyTaylor;
    public PriestlyTaylor(double _evapoTranspirationPriestlyTaylor)
    {
        evapoTranspirationPriestlyTaylor=_evapoTranspirationPriestlyTaylor;
    }
}

public static class Estimation_PriestlyTaylor
{
    public static PriestlyTaylor CalculatePriestlyTaylor(double netRadiationEquivalentEvaporation=638.142,double hslope=0.584,double psychrometricConstant=0.66,double Alpha=1.5)
    {


/*
     evapoTranspirationPriestlyTaylor  Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA Montpellier
    Abstract: Calculate Energy Balance 
    
*/
        double evapoTranspirationPriestlyTaylor;

        evapoTranspirationPriestlyTaylor = Math.Max((Alpha * hslope * (netRadiationEquivalentEvaporation) / (hslope + psychrometricConstant)), 0);
        return new PriestlyTaylor(evapoTranspirationPriestlyTaylor);
    }
}

