public class PriestlyTaylor
{
    public double evapoTranspirationPriestlyTaylor;
    public PriestlyTaylor(double _evapoTranspirationPriestlyTaylor)
    {
        this.evapoTranspirationPriestlyTaylor=_evapoTranspirationPriestlyTaylor;
    }
}

public static class Estimation_PriestlyTaylor
{
    public static PriestlyTaylor CalculatePriestlyTaylor(double netRadiationEquivalentEvaporation,double hslope,double psychrometricConstant,double Alpha)
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

        evapoTranspirationPriestlyTaylor = Math.max((Alpha * hslope * (netRadiationEquivalentEvaporation) / (hslope + psychrometricConstant)), 0);
        return new PriestlyTaylor(evapoTranspirationPriestlyTaylor);
    }

}
