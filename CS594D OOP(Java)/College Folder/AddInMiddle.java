import java.util.*;

class AddInMiddle{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		
		System.out.print("\nEnter the first name: ");
		String first = in.nextLine();

		StringBuffer s1 = new StringBuffer(first);

		System.out.println("\nFirst name: " + first);

		System.out.print("\nEnter the last name: ");
		String last = in.nextLine();
		s1.append(" ");
		s1.append(last);

		System.out.println("\nLast name: " + last);
		
		System.out.print("\nEnter the middle name: ");
		String middle = in.nextLine();
	
		s1.insert(first.length(), " " + middle);

		System.out.println("\nFull name : " + s1);		

	}
}
