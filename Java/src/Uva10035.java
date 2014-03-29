import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva10035 {
    public static String padLeft(String s) {
        return String.format("%1$" + 10 + "s", s).replace(' ', '0');
    }

    public static char[] toDigit(String s)
    {
        return new StringBuilder(padLeft(s)).reverse().toString().toCharArray();
    }

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        while (true)
        {
            String line = sc.nextLine();

            if (line.equals("0 0")) break;

            String numbers[] = line.split(" ");

            char[] firstNum = toDigit(numbers[0]);
            char[] secondNum = toDigit(numbers[1]);

            int carry = 0;
            int carryCount = 0;
            for (int i = 0; i < 10; i++)
            {
                int sum = (firstNum[i] - '0' + secondNum[i] - '0')  + carry;
                //System.out.println(sum);
                if (sum >= 10)
                {
                    carry = 1;
                    carryCount++;
                }
                else
                {
                    carry = 0;
                }
            }

            if (carryCount == 0)
                System.out.println("No carry operation.");
            else if (carryCount == 1)
                System.out.println("1 carry operation.");
            else
                System.out.println(carryCount + " carry operations.");
        }
    }
}
