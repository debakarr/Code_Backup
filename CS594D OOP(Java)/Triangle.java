class Triangle {

	//Instance variable of class Triangle
	float breadth, height;

	//Constructor to initialize instance variables
	Triangle(float breadth, float height) {
		this.breadth = breadth;
		this.height = height;
	}

	//Method to calculate Area o the Traingle and return the value to the caller
	float calculateArea() {
		return (0.5f * breadth * height);
	}
}

class Main {
	public static void main(String[] args) {

		//Declaring and initializing variables using parseFloat
		float breadth = Float.parseFloat(args[0]), height = Float.parseFloat(args[1]);

		//Create an object of class Triangle
		Triangle t =  new Triangle(breadth, height);

		//Prints the Area of the triangle
		System.out.println("Area of triangle with breadth " + breadth + " and height " + height + " = " + t.calculateArea());
	}
}

/*

C:\Users\Mayday\Documents\Projects\Code_Backup\CS594D OOP(Java)>javac Triangle.java

C:\Users\Mayday\Documents\Projects\Code_Backup\CS594D OOP(Java)>java Main 10 8
Area of triangle with breadth 10.0 and height 8.0 = 40.0

*/