//Test generation'

import java.math.BigDecimal;
public static class Test
{
    //first);
    //test1);

    public static void test1()
    {
        double evapoTranspirationPriestlyTaylor = 449.367;
        double hslope = 0.584;
        double VPDair = 2.19;
        double psychrometricConstant = 0.66;
        double Alpha = 1.5;
        double lambdaV = 2.454;
        double rhoDensityAir = 1.225;
        double specificHeatCapacityAir = 0.00101;
        double conductance = 598.685;

        Penman res0 = Estimation_Penman.CalculatePenman(evapoTranspirationPriestlyTaylor,hslope,VPDair,psychrometricConstant,Alpha,lambdaV,rhoDensityAir,specificHeatCapacityAir,conductance);
        System.out.println(" evapoTranspirationPenman: "+res0.evapoTranspirationPenman);

        System.out.println(((new BigDecimal(res0.evapoTranspirationPenman)).setScale(3, BigDecimal.ROUND_HALF_DOWN)).equals((new BigDecimal(830.958)).setScale(3, BigDecimal.ROUND_HALF_DOWN)));
    }
}
