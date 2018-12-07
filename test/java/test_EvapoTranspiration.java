//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        int isWindVpDefined = 1;
        double evapoTranspirationPriestlyTaylor = 449.367;
        double evapoTranspirationPenman = 830.957;

        EvapoTranspiration res0 = Estimation_EvapoTranspiration.CalculateEvapoTranspiration(isWindVpDefined,evapoTranspirationPriestlyTaylor,evapoTranspirationPenman);
        System.out.println(" evapoTranspiration: "+res0.evapoTranspiration);

        System.out.println(((new BigDecimal(res0.evapoTranspiration)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(830.957)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
