'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        NetRadiationEquivalentEvaporation res0 = Estimation_NetRadiationEquivalentEvaporation.CalculateNetRadiationEquivalentEvaporation(lambdaV:2.454,netRadiation:1.566);

        Console.WriteLine("{0}","netRadiationEquivalentEvaporation: "+res0.netRadiationEquivalentEvaporation);

        Console.WriteLine("netRadiationEquivalentEvaporation Comparison: ("+Math.Round(638.142,3)+";"+Math.Round(res0.netRadiationEquivalentEvaporation,3)+") "+Equals(Math.Round(638.142,3),Math.Round(res0.netRadiationEquivalentEvaporation,3)));
    }
}
