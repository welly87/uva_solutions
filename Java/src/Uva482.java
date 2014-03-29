import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva482 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();

        for (int i = 0; i < cases; i++)
        {
            sc.nextLine();
            sc.nextLine();

            String position = sc.nextLine();

            String[] positions = position.split(" ");
            int n = positions.length;
            String[] order = new String[n];
            for (int j = 0; j < n; j++)
            {
                String num = sc.next();

                int pos = Integer.parseInt(positions[j]);
                order[pos - 1] = num;
            }

            for (String s : order)
                System.out.println(s);

            if (i != cases - 1)
                System.out.println();
        }
    }
}
