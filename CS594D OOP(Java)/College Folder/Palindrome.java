import java.io.*;

class Palindrome{
	public static void main(String[] args) throws IOException{
		//Scanner in = new Scanner(System.in);

		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader rd = new BufferedReader(in); 

		System.out.print("\nEnter the String: ");
		String s1 = rd.readLine();

		StringBuffer s = new StringBuffer(s1);

		String s2 = s.reverse().toString();

		if(s2.equals(s1)){
			System.out.println(s1 + " is Palindrome.");
		}
		else
			System.out.println(s1 + " is not Palindrome.");		
	}
}
