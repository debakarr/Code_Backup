import java.util.*;

//Class Definition
class Palindrome {

	//Main method
	public static void main(String[] args) {
		// Declare the object and initialize with
        // predefined standard input object
		Scanner in = new Scanner(System.in);

		//String Input from user
		System.out.print("\nEnter the string you want to check for Palindrome: ");
		String s = in.nextLine();

		in.close();

		//StringBuffer object
		StringBuffer b = new StringBuffer(s);

		//Check whether given string is palindrome or not
		//Hence display proper output
		if (s.equals(b.reverse().toString()))
			System.out.print("\nString \"" + s + "\" is a Palindrome");
		else
			System.out.print("\nString \"" + s + "\" is not a Palindrome");
	}
}

/*

$ javac Palindrome.java

$ java Palindrome

Enter the string you want to check for Palindrome: adjccjda

String "adjccjda" is a Palindrome

*/