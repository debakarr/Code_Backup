import java.util.*;

public class Program7{
	public static void main(String[] args){
		int marks;
		Scanner input = new Scanner(System.in);
		
		System.out.print("\nEnter the percentage of student: ");
		marks = input.nextInt();
		if(marks <= 40)
			System.out.println("Fail");
		else if(marks >= 41 && marks <= 50)
			System.out.println("Average");
		else if(marks >= 51 && marks <= 60)
			System.out.println("Fair");
		else if(marks >= 61 && marks <= 70)
			System.out.println("Good");
		else if(marks >= 71 && marks <= 80)
			System.out.println("Very Good");
		else if(marks >= 81 && marks <= 90)
			System.out.println("Excellent");
		else 
			System.out.println("Outstanding");
		
	}
}
