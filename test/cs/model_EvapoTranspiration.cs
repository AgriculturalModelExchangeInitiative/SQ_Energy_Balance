public class EvapoTranspiration
{
    public double evapoTranspiration;
    public EvapoTranspiration(double _evapoTranspiration)
    {
        evapoTranspiration=_evapoTranspiration;
    }
}

public static class Estimation_EvapoTranspiration
{
    public static EvapoTranspiration CalculateEvapoTranspiration(int isWindVpDefined=1,double evapoTranspirationPriestlyTaylor=449.367,double evapoTranspirationPenman=830.958)
    {


/*
     Evapotranspiration Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA Montpellier
    Abstract: According to the availability of wind and/or vapor pressure daily data, the
            SiriusQuality2 model calculates the evapotranspiration rate using the Penman (if wind
            and vapor pressure data are available) (Penman 1948) or the Priestly-Taylor
            (Priestley and Taylor 1972) method 
    
*/
        double evapoTranspiration;

        if (isWindVpDefined == 1)
        {
                evapoTranspiration = evapoTranspirationPenman;
        }
        else
        {
                evapoTranspiration = evapoTranspirationPriestlyTaylor;
        }
        return new EvapoTranspiration(evapoTranspiration);
    }
}

