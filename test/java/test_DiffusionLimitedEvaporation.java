//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double deficitOnTopLayers = 5341;
        double soilDiffusionConstant = 4.2;

        DiffusionLimitedEvaporation res0 = Estimation_DiffusionLimitedEvaporation.CalculateDiffusionLimitedEvaporation(deficitOnTopLayers,soilDiffusionConstant);
        System.out.println(" diffusionLimitedEvaporation: "+res0.diffusionLimitedEvaporation);

        System.out.println(((new BigDecimal(res0.diffusionLimitedEvaporation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal( 6605.505)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
