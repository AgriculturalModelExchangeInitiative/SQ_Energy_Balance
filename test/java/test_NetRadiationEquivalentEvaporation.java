//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double lambdaV = 2.454;
        double netRadiation = 1.566;

        NetRadiationEquivalentEvaporation res0 = Estimation_NetRadiationEquivalentEvaporation.CalculateNetRadiationEquivalentEvaporation(lambdaV,netRadiation);
        System.out.println(" netRadiationEquivalentEvaporation: "+res0.netRadiationEquivalentEvaporation);

        System.out.println(((new BigDecimal(res0.netRadiationEquivalentEvaporation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(638.142)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
