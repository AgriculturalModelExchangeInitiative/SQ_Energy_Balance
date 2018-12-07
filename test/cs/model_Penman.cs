public class Penman
{
    public double evapoTranspirationPenman;
    public Penman(double _evapoTranspirationPenman)
    {
        evapoTranspirationPenman=_evapoTranspirationPenman;
    }
}

public static class Estimation_Penman
{
    public static Penman CalculatePenman(double evapoTranspirationPriestlyTaylor=449.367,double hslope=0.584,double VPDair=2.19,double psychrometricConstant=0.66,double Alpha=1.5,double lambdaV=2.454,double rhoDensityAir=1.225,double specificHeatCapacityAir=0.00101,double conductance=598.685)
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

