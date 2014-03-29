import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * User: Welly
 * Date: 3/24/14
 * Time: 9:25 PM
 * To change this template use File | Settings | File Templates.
 */
class Uva348 {

    private static int _dim[];
    private static int _partition[][];
    private static int n;
    private static int[][] _memo;
    private static StringBuilder sb;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        while (true)
        {
            n = sc.nextInt();

            if (n == 0) break;

            count++;

            _dim = new int[n + 1];

            for (int i = 0; i < n; i++)
            {
                int x = sc.nextInt();
                int y = sc.nextInt();

                _dim[i] = x;
                _dim[i + 1] = y;
            }

            printMCM(count);
        }
    }

    private static void printMCM(int count)
    {
        _partition = new int[n + 1][n + 1];

        initMemo();

        mcm(1, n);

        printSolution(count);
    }

    private static void printSolution(int count) {
        sb = new StringBuilder("");
        sb.append("Case " + count + ": ");

        mcmStr(1, n);
        System.out.println(sb.toString());
    }

    private static void initMemo()
    {
        _memo = new int[n + 1][n + 1];
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                _memo[i][j] = -1;
    }

    private static int mcm(int i, int j) {
        if (i == j)
            return 0;

        int min = Integer.MAX_VALUE;

        for (int k = i; k < j; k++)
        {
            int calc = mcmCache(i, k) + mcmCache(k+1, j) + _dim[i - 1] * _dim[k] * _dim[j];
            if (calc < min)
            {
                min = calc;
                _partition[i][j] = k;
            }
        }

        return min;
    }

    private static int mcmCache(int i, int j)
    {
        if (_memo[i][j] == -1)
        {
            _memo[i][j] = mcm(i, j);
        }

        return _memo[i][j];
    }

    private static void mcmStr(int i, int j) {
        if (i == j)
            sb.append("A" + i);
        else
        {
            sb.append("(");

            mcmStr(i, _partition[i][j]);

            sb.append(" x ");

            mcmStr(_partition[i][j] + 1, j);

            sb.append(")");
        }
    }
}
