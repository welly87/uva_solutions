import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva10038 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext())
        {
            int n = sc.nextInt();

            int[] nums = new int[n];

            for (int i = 0; i < n; i++)
            {
                nums[i] = sc.nextInt();
            }

            boolean jolly = true;
            boolean[] used = new boolean[3001];

            for (int i = 1; i < n - 1; i++)
            {
                int dif = Math.abs(nums[i - 1] - nums[i]);

                if (used[dif] || dif == 0 || dif >= n)
                {
                    jolly = false;
                    break;
                }
                else
                {
                    used[dif] = true;
                }
            }

            if (jolly)
                System.out.println("Jolly");
            else
                System.out.println("Not jolly");
        }
    }
}
