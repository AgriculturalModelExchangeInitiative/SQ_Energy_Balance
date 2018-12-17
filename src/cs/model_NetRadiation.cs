public class NetRadiation
{
    public double netRadiation;
    public double netOutGoingLongWaveRadiation;
    public NetRadiation(double _netRadiation,double _netOutGoingLongWaveRadiation)
    {
        netRadiation=_netRadiation;
        netOutGoingLongWaveRadiation=_netOutGoingLongWaveRadiation;
    }
}

public static class Estimation_NetRadiation
{
    public static NetRadiation CalculateNetRadiation(double minTair=0.7,double maxTair=7.2,double albedoCoefficient=0.23,double stefanBoltzman=4.903E-09,double elevation=0,double solarRadiation=3,double vaporPressure=6.1,double extraSolarRadiation=11.7)
    {


/*
     NetRadiation Model

    Author: 
    Reference: Modelling energy balance in the wheat crop model SiriusQuality2:
            Evapotranspiration and canopy and soil temperature calculations
    Instituton: INRA Montpellier
    Abstract: It is calculated at the surface of the canopy and is givenby the difference between incoming and outgoing radiation of both short 
                     and long wavelength radiation 
    
*/
        double netRadiation;
        double netOutGoingLongWaveRadiation;

        double Nsr, clearSkySolarRadiation, averageT, surfaceEmissivity, cloudCoverFactor, Nolr;
        Nsr = (1 - albedoCoefficient) * solarRadiation;
        clearSkySolarRadiation = (0.75 + 2 * Math.Pow(10, -5) * elevation) * extraSolarRadiation;
        averageT = (Math.Pow(maxTair + 273.16, 4) + Math.Pow(minTair + 273.16, 4)) / 2;
        surfaceEmissivity = (0.34 - 0.14 * Math.Sqrt(vaporPressure / 10));
        cloudCoverFactor = (1.35 * (solarRadiation / clearSkySolarRadiation) - 0.35);
        Nolr = stefanBoltzman * averageT * surfaceEmissivity * cloudCoverFactor;
        netRadiation = Nsr - Nolr;
        netOutGoingLongWaveRadiation = Nolr;
        return new NetRadiation(netRadiation,netOutGoingLongWaveRadiation);
    }
}

