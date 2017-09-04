import java.util.*;

class StringReverse {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.print("\nEnter the string you want to reverse: ");
		String s = in.nextLine();

		in.close();

		StringBuffer b = new StringBuffer(s);

		System.out.println("\nReverse of \"" + s + "\" is \"" + b.reverse() + "\"");
	}
}

/*

$ javac StringReverse.java

$ java StringReverse

Enter the string you want to reverse: Debakar

Reverse of "Debakar" is "rakabeD"

*/