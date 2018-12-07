//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double evapoTranspiration = 830.958;
        double tau = 0.9983;

        PotentialTranspiration res0 = Estimation_PotentialTranspiration.CalculatePotentialTranspiration(evapoTranspiration,tau);
        System.out.println(" potentialTranspiration: "+res0.potentialTranspiration);

        System.out.println(((new BigDecimal(res0.potentialTranspiration)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(1.413)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
