public class Penman
{
    public double evapoTranspirationPenman;
    public Penman(double _evapoTranspirationPenman)
    {
        this.evapoTranspirationPenman=_evapoTranspirationPenman;
    }
}

public static class Estimation_Penman
{
    public static Penman CalculatePenman(double evapoTranspirationPriestlyTaylor,double hslope,double VPDair,double psychrometricConstant,double Alpha,double lambdaV,double rhoDensityAir,double specificHeatCapacityAir,double conductance)
    {


/*
     Penman Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: This method is used when wind and vapor pressure daily data are available 
        
    
*/
        double evapoTranspirationPenman;

        evapoTranspirationPenman = evapoTranspirationPriestlyTaylor / Alpha + 1000 * ((rhoDensityAir * specificHeatCapacityAir * VPDair * conductance) / (lambdaV * (hslope + psychrometricConstant)));
        return new Penman(evapoTranspirationPenman);
    }

}
