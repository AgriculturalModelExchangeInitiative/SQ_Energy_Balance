//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double netRadiationEquivalentEvaporation = 638.142;
        double hslope = 0.584;
        double psychrometricConstant = 0.66;
        double Alpha = 1.5;

        PriestlyTaylor res0 = Estimation_PriestlyTaylor.CalculatePriestlyTaylor(netRadiationEquivalentEvaporation,hslope,psychrometricConstant,Alpha);
        System.out.println(" evapoTranspirationPriestlyTaylor: "+res0.evapoTranspirationPriestlyTaylor);

        System.out.println(((new BigDecimal(res0.evapoTranspirationPriestlyTaylor)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(449.367)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
