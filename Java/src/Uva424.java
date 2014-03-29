import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Main {

    static Scanner sc = new Scanner(System.in);

    static BigInteger calcSum()
    {
        BigInteger num = sc.nextBigInteger();

        if (num.equals(BigInteger.ZERO))
            return BigInteger.ZERO;

        return num.add(calcSum());
    }

    public static void main(String[] args)
    {

        System.out.println(calcSum());
//        BigInteger sum = BigInteger.ZERO;
//        while (true)
//        {
//            BigInteger nextVal = sc.nextBigInteger();
//
//            if (nextVal.equals(BigInteger.ZERO))
//            {
//                System.out.println(sum.toString());
//                break;
//            }
//            else
//            {
//                sum = sum.add(nextVal);
//            }
//        }
    }
}
