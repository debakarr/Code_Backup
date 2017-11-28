import java.util.*;

public class Program6{
	public static void main(String[] args){
		int n;
		Scanner input = new Scanner(System.in);
		
		System.out.print("\nEnter the number of lines: ");
		n = input.nextInt();
		for(int i = 1; i <= n; i++){
			for(int j = i;j <= n;j++){
				System.out.print(j + " ");
			}
			System.out.println();
		}
		
	}
}
