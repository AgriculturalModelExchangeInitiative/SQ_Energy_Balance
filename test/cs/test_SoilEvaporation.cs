'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        SoilEvaporation res0 = Estimation_SoilEvaporation.CalculateSoilEvaporation(diffusionLimitedEvaporation:6605.505,energyLimitedEvaporation:448.240);

        Console.WriteLine("{0}","soilEvaporation: "+res0.soilEvaporation);

        Console.WriteLine(" soilEvaporation Comparison: ("+Math.Round(448.240,3)+";"+Math.Round(res0. soilEvaporation,3)+") "+Equals(Math.Round(448.240,3),Math.Round(res0. soilEvaporation,3)));
    }
}
