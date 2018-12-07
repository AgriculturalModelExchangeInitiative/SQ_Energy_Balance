public class PotentialTranspiration
{
    public double potentialTranspiration;
    public PotentialTranspiration(double _potentialTranspiration)
    {
        this.potentialTranspiration=_potentialTranspiration;
    }
}

public static class Estimation_PotentialTranspiration
{
    public static PotentialTranspiration CalculatePotentialTranspiration(double evapoTranspiration,double tau)
    {


/*
     PotentialTranspiration Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA/LEPSE Montpellier
    Abstract: SiriusQuality2 uses availability of water from the soil reservoir as a method to restrict
                    transpiration as soil moisture is depleted 
    
*/
        double potentialTranspiration;

        potentialTranspiration= evapoTranspiration * (1 - tau);
        return new PotentialTranspiration(potentialTranspiration);
    }

}
