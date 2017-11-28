class Figure{
	float area();
	void displayArea();
}

class Circle extends Figure{
	float r;

	Circle(float r){
		this.r = r;
	}

	float area(){
		return(3.14159f*r*r);
	}

	void displayArea(){
		System.out.println("\nArea of Circle of radius " + r + " = " + area());
	}
}

class Triangle extends Figure{
	float b, h;
		
	Triangle(float b, float h){
		this.b = b;
		this.h = h;
	}

	float area(){
		return(.5f*b*h);
	}

	void displayArea(){
		System.out.println("\nArea of Triangle of height " + h + " and breadth " + b + " = " + area());
	}
}

class Rectangle extends Figure{
	float l, b;
	
	Rectangle(float l, float b){
		this.l = l;
		this.b = b;
	}

	float area(){
		return(l*b);
	}

	void displayArea(){
		System.out.println("\nArea of Rectangle of length " + l + " and breadth " + b + " = " + area());
	}
}

class Square extends Figure{
	float s;
	
	Square(float s){
		this.s = s;
	}

	float area(){
		return(s*s);
	}

	void displayArea(){
		System.out.println("\nArea of Square of size " + s + " = " + area());
	}
}

class Main{
	public static void main(String[] args){
		Circle c = new Circle(4.5f);
		Triangle t = new Triangle(5, 6);
		Rectangle r = new Rectangle(7, 9);
		Square s = new Square(6);
		
		c.displayArea();
		t.displayArea();
		r.displayArea();
		s.displayArea();
	}
}
