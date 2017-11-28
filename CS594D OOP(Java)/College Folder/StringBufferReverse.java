//import java.util.*;
import java.io.*;

class StringBufferReverse{
	public static void main(String[] args) throws IOException{
		//Scanner in = new Scanner(System.in);

		InputStreamReader in = new InputStreamReader(System.in);
		BufferedReader rd = new BufferedReader(in); 

		System.out.print("\nEnter the String: ");
		String s = rd.readLine();

		StringBuffer s1 = new StringBuffer(s);

		s = s1.reverse().toString();

		System.out.println("\nReverse of " + s1 + " = " + s);		
	}
}
