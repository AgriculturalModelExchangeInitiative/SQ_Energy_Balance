'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        DiffusionLimitedEvaporation res0 = Estimation_DiffusionLimitedEvaporation.CalculateDiffusionLimitedEvaporation(deficitOnTopLayers:5341,soilDiffusionConstant:4.2);

        Console.WriteLine("{0}","diffusionLimitedEvaporation: "+res0.diffusionLimitedEvaporation);

        Console.WriteLine("diffusionLimitedEvaporation Comparison: ("+Math.Round( 6605.505,3)+";"+Math.Round(res0.diffusionLimitedEvaporation,3)+") "+Equals(Math.Round( 6605.505,3),Math.Round(res0.diffusionLimitedEvaporation,3)));
    }
}
