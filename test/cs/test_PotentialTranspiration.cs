'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        PotentialTranspiration res0 = Estimation_PotentialTranspiration.CalculatePotentialTranspiration(tau:0.9983,evapoTranspiration:830.958);

        Console.WriteLine("{0}","potentialTranspiration: "+res0.potentialTranspiration);

        Console.WriteLine("potentialTranspiration Comparison: ("+Math.Round(1.413,3)+";"+Math.Round(res0.potentialTranspiration,3)+") "+Equals(Math.Round(1.413,3),Math.Round(res0.potentialTranspiration,3)));
    }
}
