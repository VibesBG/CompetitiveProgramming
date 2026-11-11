import java.math.BigInteger;
import java.util.*;

public class Lab_7_2 {

    public static BigInteger catalan(int n) {
        BigInteger res = BigInteger.ONE;

        for (int i = 0; i < n; i++) {
            res = res.multiply(BigInteger.valueOf(2L * (2L * i + 1)));
            res = res.divide(BigInteger.valueOf(i + 2));
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        while (T-- > 0) {
            int n = sc.nextInt();
            System.out.println(catalan(n));
        }
    }
}