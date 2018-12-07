//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double minTair = 0.7;
        double maxTair = 7.2;
        double albedoCoefficient = 0.23;
        double stefanBoltzman = 4.903E-09;
        double elevation = 0;
        double solarRadiation = 3;
        double vaporPressure = 6.1;
        double extraSolarRadiation = 11.7;

        NetRadiation res0 = Estimation_NetRadiation.CalculateNetRadiation(minTair,maxTair,albedoCoefficient,stefanBoltzman,elevation,solarRadiation,vaporPressure,extraSolarRadiation);
        System.out.println(" netRadiation: "+res0.netRadiation+" netOutGoingLongWaveRadiation: "+res0.netOutGoingLongWaveRadiation);

        System.out.println(((new BigDecimal(res0.netRadiation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(1.566)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
        System.out.println(((new BigDecimal(res0.netOutGoingLongWaveRadiation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(0.744)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
