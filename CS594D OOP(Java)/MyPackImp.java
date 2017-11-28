//Importing Addition and Subtraction class from MyPack package
import MyPack.*;
import MyPack.Pack1.*;
import java.util.Date;

//Importing java.util package for Scanner class
import java.util.Scanner;

//Class containing main method
class MyPackImp implements DateTime {

	public void displayTime() {
		Date d = new Date();
		System.out.println("\n" + d.toString());
	}

	//Main method
	public static void main(String[] args) {

		//Local variable to store user input
		int a, b;
		// Declare the object and initialize with
		// predefined standard input object
		Scanner sc = new Scanner(System.in);

		//Taking input from user interactively
		System.out.print("\nEnter two numbers you want to add: ");
		a = sc.nextInt();
		b = sc.nextInt();

		//Object initialization of Addition class
		//and thereafter calling Add method
		Addition a_obj = new Addition(a, b);
		a_obj.Add();

		//Taking input from user interactively
		System.out.print("\nEnter two numbers you want to subtract: ");
		a = sc.nextInt();
		b = sc.nextInt();

		//Object initialization of Subtaction class
		//and thereafter calling Dif method
		Subtraction s_obj = new Subtraction(a, b);
		s_obj.Dif();

		Display d = new Display();
		d.display();

		MyPackImp p = new MyPackImp();
		p.displayTime();
	}
}

/*
$ javac MyPackImp.java
$ java MyPackImp

Enter two numbers you want to add: 6 7
6 + 7 = 13

Enter two numbers you want to subtract: 15 3
15 - 3 = 12
*/
