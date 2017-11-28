import java.util.*;

class StringReverse{
	
	String reverse(String s){
		String rev = new String();
		for(int i = s.length() -1;i>=0;i--){
			rev = rev + s.charAt(i);
		}
		//System.out.println(rev);
		return(rev);
	}
}

class Main{
	public static void main(String[] args){
		StringReverse s = new StringReverse();
		Scanner in = new Scanner(System.in);
		//s.reverse("Hello");

		String s1;
		
		System.out.print("\nEnter the String: ");
		s1 = in.nextLine();
		
		System.out.println("\nReverse of "+ s1 + " = " + s.reverse(s1));
	}
}
