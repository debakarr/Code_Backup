class Factorial {

	//Method to calculate factorial
	//This is a recursive method.
	//Also this method use tail recursion to remove pending operations
	int calculateFactorial(int f, int n) {
		if (n == 0 || n == 1)
			return f;
		return (calculateFactorial(f * n, n - 1));
	}
}

class Main {
	public static void main(String[] args) {

		//Declaring and initializing variables using parseInt
		int n = Integer.parseInt(args[0]);

		//Create an object of class Factorial
		Factorial f = new Factorial();

		//Prints factorial of number n
		System.out.println("\nFactorial of " + n + " is " + f.calculateFactorial(1, n));
	}
}

/*

$ javac Factorial.java

$ java Main 5

Factorial of 5 is 120
*/