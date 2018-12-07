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
        double cropHeatFlux = 447.912;
        double conductance = 598.685;
        double lambdaV = 2.454;
        double rhoDensityAir = 1.225;
        double specificHeatCapacityAir = 0.00101;

        CanopyTemperature res0 = Estimation_CanopyTemperature.CalculateCanopyTemperature(minTair,maxTair,cropHeatFlux,conductance,lambdaV,rhoDensityAir,specificHeatCapacityAir);
        System.out.println(" minCanopyTemperature: "+res0.minCanopyTemperature+" maxCanopyTemperature: "+res0.maxCanopyTemperature);

        System.out.println(((new BigDecimal(res0.maxCanopyTemperature)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(8.684)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
        System.out.println(((new BigDecimal(res0.minCanopyTemperature)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(2.184)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
