//'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        Conductance res0 = Estimation_Conductance.CalculateConductance(zm:0.13,zh:0.013,d:0.67,vonKarman:0.42,heightWeatherMeasurements:2,plantHeight:0,wind:124000);
        Console.WriteLine("{0}","conductance: "+res0.conductance);
        Console.WriteLine("conductance Comparison: ("+Math.Round(598.685,3)+";"+Math.Round(res0.conductance,3)+") "+Equals(Math.Round(598.685,3),Math.Round(res0.conductance,3)));
    }
}
