import java.util.Scanner;

public class Pattern2 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("\nEnter number of line for the pattern: ");
		int n = input.nextInt();
		input.close();

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n - 1; j++) {
				System.out.print(" ");
			}
			for (int j = 0; j <= i; j++) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}
