'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        PtSoil res0 = Estimation_PtSoil.CalculatePtSoil(evapoTranspirationPriestlyTaylor:449.367,tau:0.9983,tauAlpha:0.3,Alpha:1.5);

        Console.WriteLine("{0}","energyLimitedEvaporation: "+res0.energyLimitedEvaporation);

        Console.WriteLine("energyLimitedEvaporation Comparison: ("+Math.Round(448.240,3)+";"+Math.Round(res0.energyLimitedEvaporation,3)+") "+Equals(Math.Round(448.240,3),Math.Round(res0.energyLimitedEvaporation,3)));
    }
}
