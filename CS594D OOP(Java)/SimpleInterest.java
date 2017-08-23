class SimpleInterest {

	//Method to calculate Simple interest and return it to the caller
	float calculateInterest(float p, float r, int t) {
		return (0.01f * p * r * t);
	}
}

class Main {
	public static void main(String[] args) {

		//Declaring and initializing variables using parseFloat and parseInt method
		float p = Float.parseFloat(args[0]), r = Float.parseFloat(args[1]);
		int t = Integer.parseInt(args[2]);

		//Create an object of class SimpleInterest
		SimpleInterest s = new SimpleInterest();

		//Prints the Simple interest 
		System.out.println("\nSimple Interest of principal amount Rs. " + p + " at rate of " + r + "% for " + t + " years = Rs. " + s.calculateInterest(p, r, t));
	}
}

/*

$ javac SimpleInterest.java

$ java Main 10000 15 2

Simple Interest of principal amount Rs. 10000.0 at rate of 15.0% for 2 years = Rs. 3000.0

*/