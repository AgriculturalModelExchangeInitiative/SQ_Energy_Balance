public class Conductance
{
    public double conductance;
    public Conductance(double _conductance)
    {
        this.conductance=_conductance;
    }
}

public static class Estimation_Conductance
{
    public static Conductance CalculateConductance(double vonKarman,double heightWeatherMeasurements,double zm,double zh,double d,double plantHeight,double wind)
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
        h = Math.max(10, plantHeight) / 100;
        conductance = (wind * Math.pow(vonKarman, 2)) / (Math.log((heightWeatherMeasurements - d * h) / (zm * h)) * Math.log((heightWeatherMeasurements - d * h) / (zh * h)));
        return new Conductance(conductance);
    }

}
