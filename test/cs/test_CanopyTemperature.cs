//'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        CanopyTemperature res0 = Estimation_CanopyTemperature.CalculateCanopyTemperature(specificHeatCapacityAir:0.00101,minTair:0.7,rhoDensityAir:1.225,maxTair:7.2,cropHeatFlux:447.912,conductance:598.685,lambdaV:2.454);
        Console.WriteLine("{0}\n{1}","minCanopyTemperature: "+res0.minCanopyTemperature,"maxCanopyTemperature: "+res0.maxCanopyTemperature);
        Console.WriteLine("maxCanopyTemperature Comparison: ("+Math.Round(8.684,3)+";"+Math.Round(res0.maxCanopyTemperature,3)+") "+Equals(Math.Round(8.684,3),Math.Round(res0.maxCanopyTemperature,3)));
        Console.WriteLine("minCanopyTemperature Comparison: ("+Math.Round(2.184,3)+";"+Math.Round(res0.minCanopyTemperature,3)+") "+Equals(Math.Round(2.184,3),Math.Round(res0.minCanopyTemperature,3)));
    }
}
