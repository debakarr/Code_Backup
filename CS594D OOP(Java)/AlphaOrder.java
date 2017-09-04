import java.util.*;

class AlphaOrder {
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

		String ret = new String(alpha);
		return (ret);
	}
}

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		AlphaOrder a = new AlphaOrder();

		System.out.print("\nEnter the String: ");
		String s = in.nextLine();

		StringBuffer alpha = new StringBuffer(a.generateAlphaOrder(s));

		System.out.print("\nAlpha order string: " + alpha);
	}
}