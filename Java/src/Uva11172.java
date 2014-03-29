import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva11172 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++)
        {
            int first = sc.nextInt();
            int second = sc.nextInt();

            if (first > second)
                System.out.println(">");
            else if (first < second)
                System.out.println("<");
            else
                System.out.println("=");
        }
    }
}
