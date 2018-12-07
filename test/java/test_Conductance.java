//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double vonKarman = 0.42;
        double heightWeatherMeasurements = 2;
        double zm = 0.13;
        double zh = 0.013;
        double d = 0.67;
        double plantHeight = 0;
        double wind = 124000;

        Conductance res0 = Estimation_Conductance.CalculateConductance(vonKarman,heightWeatherMeasurements,zm,zh,d,plantHeight,wind);
        System.out.println(" conductance: "+res0.conductance);

        System.out.println(((new BigDecimal(res0.conductance)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(598.685)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
