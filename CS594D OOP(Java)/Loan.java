import java.util.*;

abstract class Loan {
	float loanAmount, interestRate;
	int noOfYears;

	Loan(float loanAmount, float interestRate, int noOfYears) {
		this.loanAmount = loanAmount;
		this.interestRate = interestRate;
		this.noOfYears = noOfYears;
	}

	abstract float calculateInterest();
}

class EducationLoan extends Loan {

	EducationLoan(float loanAmount, float interestRate, int noOfYears) {
		super(loanAmount, interestRate, noOfYears);
	}

	float calculateInterest() {
		return (.01f * loanAmount * interestRate * noOfYears);
	}
}

class HomeLoan extends Loan {

	HomeLoan(float loanAmount, float interestRate, int noOfYears) {
		super(loanAmount, interestRate, noOfYears);
	}

	float calculateInterest() {
		return ((loanAmount * (float)Math.pow(1 + interestRate * .01, noOfYears)) - loanAmount);
	}
}

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		char c;
		int choice, noOfYears;
		float loanAmount, interestRate;

		do {
			System.out.print("\n1. Calculate Educational loan\n2. Calculate Home load\nEnter your choice: ");
			choice = in.nextInt();

			switch (choice) {
			case 1:
				System.out.print("\nEnter the Loan Amount, Interest rate and number of years: ");
				loanAmount = in.nextFloat();
				interestRate = in.nextFloat();
				noOfYears = in.nextInt();

				EducationLoan e = new EducationLoan(loanAmount, interestRate, noOfYears);
				System.out.println("\nInterest = " + e.calculateInterest());
				break;

			case 2:
				System.out.print("\nEnter the Loan Amount, Interest rate and number of years: ");
				loanAmount = in.nextFloat();
				interestRate = in.nextFloat();
				noOfYears = in.nextInt();

				HomeLoan h = new HomeLoan(loanAmount, interestRate, noOfYears);
				System.out.println("\nInterest = " + h.calculateInterest());
				break;

			default:
				System.out.println("\nInvalid Input, please try again...");
			}
			System.out.print("\nWant to check more?(Y/N): ");
			c = in.next().charAt(0);
		} while (c == 'y' || c == 'Y');
	}
}