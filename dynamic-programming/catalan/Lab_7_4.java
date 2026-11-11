import java.math.BigInteger;
import java.util.*;

public class Lab_7_4 {

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
        if (sc.hasNextInt()) {
            int t = sc.nextInt();
            while (t-- > 0 && sc.hasNextInt()) {
                int n = sc.nextInt();
                System.out.println(catalan(n));            }
        }
    }
}