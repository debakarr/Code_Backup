import java.util.Scanner;

public class Pattern1 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("\nEnter number of line for the pattern: ");
		int n = input.nextInt();
		input.close();

		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				System.out.print(j + " ");
			}
			System.out.println();
		}

	}
}
