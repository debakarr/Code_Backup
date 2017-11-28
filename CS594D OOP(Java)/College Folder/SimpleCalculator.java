class SimpleCalculator{
	void calculate(int a, int b, char c){
		if(c == '+')
			System.out.println(a + " " + c + " " + b + " = "  + (a+ b));
		else if(c == '-')
			System.out.println(a + " " + c + " " + b + " = "  + (a-b));
		else if(c == '*')
			System.out.println(a + " " + c + " " + b + " = "  + (a*b));
		else if(c == '/')
			System.out.println(a + " " + c + " " + b + " = "  + (float)(a/b));
		else
			System.out.println("Invalid Input.");
	}
}
class Main{
	public static void main(String[] args){
		int a = Integer.parseInt(args[0]), b = Integer.parseInt(args[2]);
		char c = args[1].charAt(0);
		SimpleCalculator s = new SimpleCalculator();
		s.calculate(a, b, c);		
	}
}
