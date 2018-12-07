public class DiffusionLimitedEvaporation
{
    public double diffusionLimitedEvaporation;
    public DiffusionLimitedEvaporation(double _diffusionLimitedEvaporation)
    {
        this.diffusionLimitedEvaporation=_diffusionLimitedEvaporation;
    }
}

public static class Estimation_DiffusionLimitedEvaporation
{
    public static DiffusionLimitedEvaporation CalculateDiffusionLimitedEvaporation(double deficitOnTopLayers,double soilDiffusionConstant)
    {


/*
     DiffusionLimitedEvaporation Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA Montpellier
    Abstract: the evaporation from the diffusion limited soil 
    
*/
        double diffusionLimitedEvaporation;

        if (deficitOnTopLayers / 1000 <= 0)
        	diffusionLimitedEvaporation = 8.3 * 1000;
        else
        {
        	if (deficitOnTopLayers / 1000 < 25)
        		diffusionLimitedEvaporation = (2 * soilDiffusionConstant * soilDiffusionConstant / (deficitOnTopLayers / 1000)) * 1000;
        	else
        		diffusionLimitedEvaporation = 0;
        }
        return new DiffusionLimitedEvaporation(diffusionLimitedEvaporation);
    }

}
