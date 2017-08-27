class Fact {

	//Method to calculate factorial
	//This is a recursive method.
	//Also this method use tail recursion to remove pending operations
	int factorial(int f, int n) {
		if (n == 0 || n == 1)
			return f;
		return (factorial(f * n, n - 1));
	}
}

class Main {
	public static void main(String[] args) {

		//Declaring and initializing variables using parseInt
		int n = Integer.parseInt(args[0]);

		//Create an object of class Fact
		Fact f = new Fact();

		//Prints factorial of number n
		System.out.println("\nFactorial of " + n + " is " + f.factorial(1, n));
	}
}

/*

$ javac Fact.java

$ java Main 5

Fact of 5 is 120
*/