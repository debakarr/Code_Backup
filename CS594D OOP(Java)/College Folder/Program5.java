import java.util.*;

public class Program5{
	public static void main(String[] args){
		int a, b;
		Scanner input = new Scanner(System.in);	
		System.out.print("Enter the value of a and b: ");
		a  = input.nextInt();
		b = input.nextInt();
		System.out.println("\nBefore interchange: Value of a is " + a + " and b is " + b);
		b = a+b;
		a = b-a;
		b = b-a; 
		System.out.println("\nAfter Interchange: Value of a is " + a + " and b is " + b);
	}
}
