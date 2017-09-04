import java.util.*;

class Palindrome {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.print("\nEnter the string you want to check for Palindrome: ");
		String s = in.nextLine();

		in.close();

		StringBuffer b = new StringBuffer(s);

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