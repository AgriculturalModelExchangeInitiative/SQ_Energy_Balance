'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        CropHeatFlux res0 = Estimation_CropHeatFlux.CalculateCropHeatFlux(soilHeatFlux:188.817,potentialTranspiration: 1.413,netRadiationEquivalentEvaporation:638.142);

        Console.WriteLine("{0}","cropHeatFlux: "+res0.cropHeatFlux);

        Console.WriteLine("cropHeatFlux Comparison: ("+Math.Round( 447.912,3)+";"+Math.Round(res0.cropHeatFlux,3)+") "+Equals(Math.Round( 447.912,3),Math.Round(res0.cropHeatFlux,3)));
    }
}
