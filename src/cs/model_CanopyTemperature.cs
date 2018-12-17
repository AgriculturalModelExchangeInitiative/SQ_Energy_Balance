public class CanopyTemperature
{
    public double minCanopyTemperature;
    public double maxCanopyTemperature;
    public CanopyTemperature(double _minCanopyTemperature,double _maxCanopyTemperature)
    {
        minCanopyTemperature=_minCanopyTemperature;
        maxCanopyTemperature=_maxCanopyTemperature;
    }
}

public static class Estimation_CanopyTemperature
{
    public static CanopyTemperature CalculateCanopyTemperature(double minTair=0.7,double maxTair=7.2,double cropHeatFlux=447.912,double conductance=598.685,double lambdaV=2.454,double rhoDensityAir=1.225,double specificHeatCapacityAir=0.00101)
    {


/*
     CanopyTemperature Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: It is calculated from the crop heat flux and the boundary layer conductance 
    
*/
        double minCanopyTemperature;
        double maxCanopyTemperature;

        minCanopyTemperature = minTair + cropHeatFlux / ((rhoDensityAir * specificHeatCapacityAir * conductance / lambdaV) * 1000)
        maxCanopyTemperature = maxTair + cropHeatFlux / ((rhoDensityAir * specificHeatCapacityAir * conductance / lambdaV) * 1000)
        return new CanopyTemperature(minCanopyTemperature,maxCanopyTemperature);
    }
}

