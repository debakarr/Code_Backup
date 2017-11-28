import java.util.Scanner;

class SalaryException extends Exception {
	SalaryException() {
		super("Exception: salary is too small for bonus");
	}

	SalaryException(String msg) {
		super(msg);
	}
}

class Main {
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);

		System.out.print("\nEnter the salary: ");
		n = sc.nextInt();

		try {
			if (n < 1000)
				throw new SalaryException();
			System.out.printf("Bonus: Rs. %.2f", n * .1);
		} catch (SalaryException se) {
			System.out.println(se.getMessage());
		}
	}
}