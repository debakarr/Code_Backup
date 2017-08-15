class Calculator {
	float calculate(float a, float b, char c) {
		if (c == '+')
			return (a + b);
		else if (c == '-')
			return (a - b);
		else if (c == '*')
			return (a * b);
		else if (c == '/')
			return (a / b);
		else
			return (-9999f);
	}
}

class Main {
	public static void main(String[] args) {
		float a = Float.parseFloat(args[0]), b = Float.parseFloat(args[2]);
		char c = args[1].charAt(0);

		Calculator c1 = new Calculator();

		if (c1.calculate(a, b, c) != -9999f)
			System.out.println(args[0] + " " + args[1] + " " + args[2] + " = " + c1.calculate(a, b, c));
		else
			System.out.print("Invalid input.");
	}
}