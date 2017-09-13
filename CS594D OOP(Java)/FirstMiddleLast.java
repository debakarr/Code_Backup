import java.util.*;

//Class Definition
class FirstMiddleLast {

	//Main Method
	public static void main(String[] args) {

		// Declare the object and initialize with
        // predefined standard input object
		Scanner in = new Scanner(System.in);

		//Input First name
		System.out.print("\nEnter the First Name: ");
		String first = in.nextLine();

		//StringBuffer object
		StringBuffer s = new StringBuffer(first);

		//Display First name
		System.out.println("\nFirst name : " + first);

		//Input Last name
		System.out.print("\nEnter your Last Name: ");
		String last = in.nextLine();

		//Append last name in StringBuffer object value
		s.append(" " + last);

		//Display Last name
		System.out.println("\nLast name : " + last);

		//Input Middle name
		System.out.print("\nEnter your Middle Name: ");
		String middle = in.nextLine();

		//Insert middle name in StringBuffer object value
		s.insert(first.length(), " " + middle);

		//Display Full name
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