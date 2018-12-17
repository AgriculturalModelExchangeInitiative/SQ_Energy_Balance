public class SoilEvaporation
{
    public double soilEvaporation;
    public SoilEvaporation(double _soilEvaporation)
    {
        this.soilEvaporation=_soilEvaporation;
    }
}

public static class Estimation_SoilEvaporation
{
    public static SoilEvaporation CalculateSoilEvaporation(double diffusionLimitedEvaporation,double energyLimitedEvaporation)
    {


/*
     SoilEvaporation Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA Montpellier
    Abstract: Starting from a soil at field capacity, soil evaporation  is assumed to
                be energy limited during the first phase of evaporation and diffusion limited thereafter.
                Hence, the soil evaporation model considers these two processes taking the minimum between
                the energy limited evaporation (PtSoil) and the diffused limited
                evaporation 
    
*/
        double soilEvaporation;

        soilEvaporation = Math.min(diffusionLimitedEvaporation, energyLimitedEvaporation);
        return new SoilEvaporation(soilEvaporation);
    }

}
