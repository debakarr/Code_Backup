class Triangle {
	float calculateArea(float b, float h) {
		return (0.5f * b * h);
	}
}

class Main {
	public static void main(String[] args) {
		float b = Float.parseFloat(args[0]), h = Float.parseFloat(args[1]);

		Triangle t =  new Triangle();

		System.out.println("Area of triangle with breadth " + b + " and height " + h + " = " + t.calculateArea(b, h));
	}
}