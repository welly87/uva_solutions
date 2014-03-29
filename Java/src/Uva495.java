import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva495 {

    static BigInteger[] fibos = new BigInteger[5010];

    private static BigInteger fibmem(int n)
    {
        if (fibos[n] == null)
            return fibos[n] = fib(n);

        return fibos[n];
    }

    private static BigInteger fib(int n)
    {
        if (n == 0 || n == 1)
            return new BigInteger("" + n);

        return fibmem(n - 1).add(fibmem(n - 2));
    }

    private static void fibIterative(int n)
    {
        int i = 0;
        fibos[i++] = BigInteger.ZERO; // fibos[0]
        fibos[i++] = BigInteger.ONE;  // fibos[1]

        while (i <= n)
        {
            fibos[i] = fibos[i - 1].add(fibos[i - 2]);
            i++;
        }
    }


    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        //fib(5001);

        fibIterative(5001);

        while (sc.hasNext())
        {
            int req = sc.nextInt();
            System.out.printf("The Fibonacci number for %d is %s\n", req, fibos[req].toString());
        }
    }
}
