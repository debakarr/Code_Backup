class Fibonacci {
	void generateFibonacci(int n) {
		int a = 1, b = 0, sum;
		while (n-- > 0) {
			sum  = a + b;
			System.out.print(sum + " ");
			b = a;
			a = sum;
		}
	}
}

class Main {
	public static void main(String[] args) {
		Fibonacci f = new Fibonacci();

		f.generateFibonacci(Integer.parseInt(args[0]));
	}
}