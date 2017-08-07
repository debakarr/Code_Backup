import java.util.Scanner;

public class RemarkCard {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("\nEnter the marks of the students: ");
		int marks = input.nextInt();
		input.close();

		if (marks <= 40)
			System.out.println("Fail.");
		else if (marks >= 41 && marks <= 50)
			System.out.println("Average.");
		else if (marks >= 51 && marks <= 60)
			System.out.println("Fair.");
		else if (marks >= 61 && marks <= 70)
			System.out.println("Good.");
		else if (marks >= 71 && marks <= 80)
			System.out.println("Very Good.");
		else if (marks >= 81 && marks <= 90)
			System.out.println("Excellent.");
		else
			System.out.println("Outstanding.");
	}
}
