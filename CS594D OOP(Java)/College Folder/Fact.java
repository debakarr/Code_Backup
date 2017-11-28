class Fact{
	static int factorial(int f, int n){
		if(n == 1 || n == 0)
			return f;
		return(factorial(f*n, n-1));
	}
}

class Main{
	public static void main(String[] args){
		int n = Integer.parseInt(args[0]);
		System.out.println("Factorial of " + args[0] + " = "+ Fact.factorial(1, n));
	}
}
