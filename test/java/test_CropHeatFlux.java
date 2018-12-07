//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double netRadiationEquivalentEvaporation = 638.142;
        double soilHeatFlux = 188.817;
        double potentialTranspiration =  1.413;

        CropHeatFlux res0 = Estimation_CropHeatFlux.CalculateCropHeatFlux(netRadiationEquivalentEvaporation,soilHeatFlux,potentialTranspiration);
        System.out.println(" cropHeatFlux: "+res0.cropHeatFlux);

        System.out.println(((new BigDecimal(res0.cropHeatFlux)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal( 447.912)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
