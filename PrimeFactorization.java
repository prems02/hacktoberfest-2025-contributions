// Problem Statement: Print all prime factors of a given number
// Time Complexity: O(sqrt(N))
// Space Complexity: O(1)

import java.util.Scanner;

public class PrimeFactorization {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n = sc.nextInt();

        System.out.print("Prime factors: ");
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                System.out.print(i + " ");
                n /= i;
            }
        }
        System.out.println();
        sc.close();
    }
}
