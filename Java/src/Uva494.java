import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva494 {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLine())
        {
            String line = sc.nextLine();
            String[] words = line.split("[^A-Za-z]");
            int count = words.length;

            for (String word : words)
            {
                if (word.isEmpty())
                    count = Math.max(0, --count);
            }

            System.out.println(count);

        }
    }
}
