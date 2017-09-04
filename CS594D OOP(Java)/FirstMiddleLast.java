import java.util.*;

class FirstMiddleLast {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.print("\nEnter the First Name: ");
		String first = in.nextLine();

		StringBuffer s = new StringBuffer(first);

		System.out.println("\nFirst name : " + first);

		System.out.print("\nEmter your Last Name: ");
		String last = in.nextLine();
		s.append(" " + last);

		System.out.println("\nLast name : " + last);

		System.out.print("\nEnter your Middle Name: ");
		String middle = in.nextLine();
		s.insert(first.length(), " " + middle);

		System.out.println("\nFull Name: " + s);
	}
}

/*

$ javac FirstMiddleLast.java

$ java FirstMiddleLast

Enter the First Name: Debakar

First name : Debakar

Emter your Last Name: Roy

Last name : Roy

Enter your Middle Name: Chandra

Full Name: Debakar Chandra Roy

*/