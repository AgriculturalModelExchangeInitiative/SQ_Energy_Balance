public class CropHeatFlux
{
    public double cropHeatFlux;
    public CropHeatFlux(double _cropHeatFlux)
    {
        this.cropHeatFlux=_cropHeatFlux;
    }
}

public static class Estimation_CropHeatFlux
{
    public static CropHeatFlux CalculateCropHeatFlux(double netRadiationEquivalentEvaporation,double soilHeatFlux,double potentialTranspiration)
    {


/*
     CropHeatFlux Model

    Author: 
    Reference: abModelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: It is calculated from net Radiation, soil heat flux and potential transpiration 
    
*/
        double cropHeatFlux;

        cropHeatFlux = netRadiationEquivalentEvaporation - soilHeatFlux - potentialTranspiration;
        return new CropHeatFlux(cropHeatFlux);
    }

}
