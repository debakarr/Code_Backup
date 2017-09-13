import java.util.*;

//Class Definition
class AlphaOrder {

	//Method to generate output string
	String generateAlphaOrder(String s) {
		char temp;
		StringBuffer alpha = new StringBuffer(s);

		for (int i = 0; i < alpha.length(); i++) {
			for (int j = i + 1; j < alpha.length(); j++) {
				if (alpha.charAt(i) > alpha.charAt(j)) {
					temp = alpha.charAt(j);
					alpha.delete(j, j + 1);
					alpha.insert(i, temp);
				}
			}
		}

		//String object to store value of sorted alphabetic order string
		String ret = new String(alpha);
		return (ret);
	}
}

class Main {

	//Main method
	public static void main(String[] args) {
		// Declare the object and initialize with
        // predefined standard input object
		Scanner in = new Scanner(System.in);

		//Create object of class AlphaOrder
		AlphaOrder a = new AlphaOrder();

		//Input String
		System.out.print("\nEnter the String: ");
		String s = in.nextLine();

		//String object to store value for alphabetic order sorted string
		String alpha = new String(a.generateAlphaOrder(s));

		//Display output
		System.out.print("\nAlpha order string: " + alpha);
	}
}