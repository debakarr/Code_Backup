import java.util.Scanner;

public class Swap2Numbers {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("\nEnter two numbers: ");
		int a = input.nextInt(), b = input.nextInt();
		input.close();

		System.out.println("\nBefore Swap: a = " + a + ", b = " + b);
		a = a + b;
		b = a - b;
		a = a - b;
		System.out.println("\nAfter Swap: a = " + a + ", b = " + b);
	}
}
