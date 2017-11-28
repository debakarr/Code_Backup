class Fibonacci{
	void printFibonacci(int n){
		int a = 1, b = 0, sum;
		System.out.print("First " + n +" number in Fibonacci series: ");
		for(int i = 0; i < n; i++){
			sum = a + b;
			System.out.print(sum + " ");
			a = b;
			b = sum;
		}
		System.out.println();
	}
}
class Main{
	public static void main(String[] args){
		Fibonacci f = new Fibonacci();
		f.printFibonacci(Integer.parseInt(args[0]));
	}
}
