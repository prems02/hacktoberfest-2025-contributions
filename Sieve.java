import java.util.Arrays;

public class Sieve {
    public static void sieveOfEratosthenes(int n) {
        boolean[] prime = new boolean[n + 1];
        Arrays.fill(prime, true);
        prime[0] = prime[1] = false;

        for (int p = 2; p * p <= n; p++) {
            if (prime[p]) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        System.out.println("Prime numbers up to " + n + ":");
        for (int i = 2; i <= n; i++) {
            if (prime[i])
                System.out.print(i + " ");
        }
    }

    public static void main(String[] args) {
        sieveOfEratosthenes(50);
    }
}