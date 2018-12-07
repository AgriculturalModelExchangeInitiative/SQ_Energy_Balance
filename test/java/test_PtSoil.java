//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double evapoTranspirationPriestlyTaylor = 449.367;
        double Alpha = 1.5;
        double tau = 0.9983;
        double tauAlpha = 0.3;

        PtSoil res0 = Estimation_PtSoil.CalculatePtSoil(evapoTranspirationPriestlyTaylor,Alpha,tau,tauAlpha);
        System.out.println(" energyLimitedEvaporation: "+res0.energyLimitedEvaporation);

        System.out.println(((new BigDecimal(res0.energyLimitedEvaporation)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(448.240)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
