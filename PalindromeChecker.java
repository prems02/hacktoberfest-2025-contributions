import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter text or number: ");
        String input = sc.nextLine();

        String reversed = new StringBuilder(input).reverse().toString();
        if (input.equalsIgnoreCase(reversed))
            System.out.println("✅ It's a Palindrome!");
        else
            System.out.println("❌ Not a Palindrome.");
    }
}
