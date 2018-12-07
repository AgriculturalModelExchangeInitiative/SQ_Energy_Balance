'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        NetRadiation res0 = Estimation_NetRadiation.CalculateNetRadiation(solarRadiation:3,minTair:0.7,elevation:0,stefanBoltzman:4.903E-09,maxTair:7.2,extraSolarRadiation:11.7,vaporPressure:6.1,albedoCoefficient:0.23);

        Console.WriteLine("{0}\n{1}","netRadiation: "+res0.netRadiation,"netOutGoingLongWaveRadiation: "+res0.netOutGoingLongWaveRadiation);

        Console.WriteLine("netRadiation Comparison: ("+Math.Round(1.566,3)+";"+Math.Round(res0.netRadiation,3)+") "+Equals(Math.Round(1.566,3),Math.Round(res0.netRadiation,3)));
        Console.WriteLine("netOutGoingLongWaveRadiation Comparison: ("+Math.Round(0.744,3)+";"+Math.Round(res0.netOutGoingLongWaveRadiation,3)+") "+Equals(Math.Round(0.744,3),Math.Round(res0.netOutGoingLongWaveRadiation,3)));
    }
}
