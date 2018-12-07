'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        SoilHeatFlux res0 = Estimation_SoilHeatFlux.CalculateSoilHeatFlux(soilEvaporation:448.240,tau:0.9983,netRadiationEquivalentEvaporation:638.142);

        Console.WriteLine("{0}","soilHeatFlux: "+res0.soilHeatFlux);

        Console.WriteLine("soilHeatFlux Comparison: ("+Math.Round(188.817,3)+";"+Math.Round(res0.soilHeatFlux,3)+") "+Equals(Math.Round(188.817,3),Math.Round(res0.soilHeatFlux,3)));
    }
}
