import java.util.*;

//Class Definition
class StringReverse {

	//Main method
	public static void main(String[] args) {
		// Declare the object and initialize with
        // predefined standard input object
		Scanner in = new Scanner(System.in);

		//String Input from user
		System.out.print("\nEnter the string you want to reverse: ");
		String s = in.nextLine();

		in.close();

		//StringBuffer object
		StringBuffer b = new StringBuffer(s);

		//Display reverse of String
		System.out.println("\nReverse of \"" + s + "\" is \"" + b.reverse() + "\"");
	}
}

/*

$ javac StringReverse.java

$ java StringReverse

Enter the string you want to reverse: Debakar

Reverse of "Debakar" is "rakabeD"

*/