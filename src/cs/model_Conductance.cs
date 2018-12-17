public class Conductance
{
    public double conductance;
    public Conductance(double _conductance)
    {
        conductance=_conductance;
    }
}

public static class Estimation_Conductance
{
    public static Conductance CalculateConductance(double vonKarman=0.42,double heightWeatherMeasurements=2,double zm=0.13,double zh=0.013,double d=0.67,double plantHeight=0,double wind=124000)
    {


/*
     Conductance Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: The boundary layer conductance is expressed as the wind speed profile above the
            canopy and the canopy structure. The approach does not take into account buoyancy
            effects. 
    
*/
        double conductance;

        double h;
        h = Math.Max(10, plantHeight) / 100;
        conductance = (wind * Math.Pow(vonKarman, 2)) / (Math.Log((heightWeatherMeasurements - d * h) / (zm * h)) * Math.Log((heightWeatherMeasurements - d * h) / (zh * h)));
        return new Conductance(conductance);
    }
}

