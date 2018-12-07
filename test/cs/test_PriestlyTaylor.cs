'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        PriestlyTaylor res0 = Estimation_PriestlyTaylor.CalculatePriestlyTaylor(Alpha:1.5,psychrometricConstant:0.66,hslope:0.584,netRadiationEquivalentEvaporation:638.142);

        Console.WriteLine("{0}","evapoTranspirationPriestlyTaylor: "+res0.evapoTranspirationPriestlyTaylor);

        Console.WriteLine("evapoTranspirationPriestlyTaylor Comparison: ("+Math.Round(449.367,3)+";"+Math.Round(res0.evapoTranspirationPriestlyTaylor,3)+") "+Equals(Math.Round(449.367,3),Math.Round(res0.evapoTranspirationPriestlyTaylor,3)));
    }
}
