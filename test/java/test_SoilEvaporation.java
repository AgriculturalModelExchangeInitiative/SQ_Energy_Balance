//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double diffusionLimitedEvaporation = 6605.505;
        double energyLimitedEvaporation = 448.240;

        SoilEvaporation res0 = Estimation_SoilEvaporation.CalculateSoilEvaporation(diffusionLimitedEvaporation,energyLimitedEvaporation);
        System.out.println(" soilEvaporation: "+res0.soilEvaporation);

        System.out.println(((new BigDecimal(res0. soilEvaporation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(448.240)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
