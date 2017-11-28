import java.util.*;

public class Program8{
	public static void main(String[] args){
		int n;
		Scanner input = new Scanner(System.in);
		
		System.out.print("\nEnter the number of lines: ");
		n = input.nextInt();
		for(int i = 1; i <= n; i++){
			for(int k = i; k<=n;k++)
				System.out.print(" ");
			for(int j = 1;j <= i;j++){
				System.out.print("* ");
			}
			System.out.println();
		}
		
	}
}
