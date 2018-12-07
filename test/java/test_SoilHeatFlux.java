//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double netRadiationEquivalentEvaporation = 638.142;
        double tau = 0.9983;
        double soilEvaporation = 448.240;

        SoilHeatFlux res0 = Estimation_SoilHeatFlux.CalculateSoilHeatFlux(netRadiationEquivalentEvaporation,tau,soilEvaporation);
        System.out.println(" soilHeatFlux: "+res0.soilHeatFlux);

        System.out.println(((new BigDecimal(res0.soilHeatFlux)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(188.817)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
