public class SoilHeatFlux
{
    public double soilHeatFlux;
    public SoilHeatFlux(double _soilHeatFlux)
    {
        soilHeatFlux=_soilHeatFlux;
    }
}

public static class Estimation_SoilHeatFlux
{
    public static SoilHeatFlux CalculateSoilHeatFlux(double netRadiationEquivalentEvaporation=638.142,double tau=0.9983,double soilEvaporation=448.240)
    {


/*
     SoilHeatFlux Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: The available energy in the soil 
    
*/
        double soilHeatFlux;

        soilHeatFlux = tau * netRadiationEquivalentEvaporation - soilEvaporation;
        return new SoilHeatFlux(soilHeatFlux);
    }
}

