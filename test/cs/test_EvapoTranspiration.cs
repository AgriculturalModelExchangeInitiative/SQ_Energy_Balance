'Test generation'

public static class Test
{
    //first);
    //test1

    public static void test1()
    {
        EvapoTranspiration res0 = Estimation_EvapoTranspiration.CalculateEvapoTranspiration(isWindVpDefined:1,evapoTranspirationPriestlyTaylor:449.367,evapoTranspirationPenman:830.957);

        Console.WriteLine("{0}","evapoTranspiration: "+res0.evapoTranspiration);

        Console.WriteLine("evapoTranspiration Comparison: ("+Math.Round(830.957,3)+";"+Math.Round(res0.evapoTranspiration,3)+") "+Equals(Math.Round(830.957,3),Math.Round(res0.evapoTranspiration,3)));
    }
}
