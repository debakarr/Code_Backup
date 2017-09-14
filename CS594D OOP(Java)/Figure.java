class Figure {

	// Instance variable to store area
	float area;

	// Default Constructor of class Figure
	Figure() {
		// By default set are to 0.0f
		area = 0.0f;
	}

	void area() {
		// Method to be overrided by subclasses of Figure
	}

	// Method to display area
	void display() {
		System.out.print("area is " + area);
	}
}

// Circle (subclass of Figure to calculate area of a circle)
class Circle extends Figure {
	float radius;		// Instance Variable

	// Default Constructor of class Figure
	Circle() {
		radius = 0.0f;
	}

	// Parameterise Constructor of class Figure
	Circle(float radius) {
		this.radius = radius;
	}

	// Overriding area method
	void area() {
		area = 3.14159f * radius * radius;
	}
}

// Triangle (subclass of Figure to calculate area of a triangle)

class Triangle extends Figure {
	float breadth, height;		// Instance Variable

	// Default Constructor of class Figure
	Triangle() {
		breadth = height = 0.0f;
	}

	// Parameterise Constructor of class Figure
	Triangle(float breadth, float height) {
		this.breadth = breadth;
		this.height = height;
	}

	// Overriding area method
	void area() {
		area = 0.5f * breadth * height;
	}
}

// Rectangle (subclass of Figure to calculate area of a rectangle)
class Rectangle extends Figure {

	float breadth, length;		// Instance Variable

	// Default Constructor of class Figure
	Rectangle() {
		breadth = length = 0.0f;
	}

	// Parameterise Constructor of class Figure
	Rectangle(float breadth, float length) {
		this.breadth = breadth;
		this.length = length;
	}

	// Overriding area method
	void area() {
		area = length * breadth;
	}
}

// Square (subclass of Figure to calculate area of a sqaure)
class Square extends Figure {

	float side;		// Instance Variable

	// Default Constructor of class Figure
	Square() {
		side = 0.0f;
	}

	// Parameterise Constructor of class Figure
	Square(float side) {
		this.side = side;
	}

	// Overriding area method
	void area() {
		area = side * side;
	}
}

class Main {

	// main method
	public static void main(String[] args) {
		Figure f;		// obtain a reference of class Figure

		f = new Circle(5); //  f refers to Circle object
		f.area();	//  calls Circle's version of area
		System.out.print("\nFor Circle of radius 5 ");
		f.display(); 	// Call display defined in Figure

		f = new Triangle(4, 9);	//  f refers to Triangle object
		f.area();	//  calls Triangle's version of area
		System.out.print("\nFor Triangle of breadth 4 and height 7 ");
		f.display();	// Call display defined in FiguTrianglee

		f = new Rectangle(6, 7);	//  f refers to Rectangle object
		f.area();	//  calls Rectangle's version of area
		System.out.print("\nFor Rectangle of length 8 and breadth 7 ");
		f.display();	// Call display defined in Figure

		f = new Square(5);	//  f refers to Sqaure object
		f.area();	//  calls Sqaure's version of area
		System.out.print("\nFor Square of size 9 ");
		f.display();	// Call display defined in Figure
	}
}

/*

$ javac Figure.java
$ java Main
For Circle of radius 5 area is 78.53975
For Triangle of breadth 4 and height 9 area is 18.0
For Rectangle of length 6 and breadth 7 area is 42.0
For Square of size 5 area is 25.0

*/