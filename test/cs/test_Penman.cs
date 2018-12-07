'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        Penman res0 = Estimation_Penman.CalculatePenman(specificHeatCapacityAir:0.00101,rhoDensityAir:1.225,VPDair:2.19,conductance:598.685,psychrometricConstant:0.66,evapoTranspirationPriestlyTaylor:449.367,Alpha:1.5,lambdaV:2.454,hslope:0.584);

        Console.WriteLine("{0}","evapoTranspirationPenman: "+res0.evapoTranspirationPenman);

        Console.WriteLine("evapoTranspirationPenman Comparison: ("+Math.Round(830.958,3)+";"+Math.Round(res0.evapoTranspirationPenman,3)+") "+Equals(Math.Round(830.958,3),Math.Round(res0.evapoTranspirationPenman,3)));
    }
}
