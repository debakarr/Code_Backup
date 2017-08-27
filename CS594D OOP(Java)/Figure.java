class Figure {
	float a;
	void area(){

	}
	void display() {
		System.out.print("area is " + a);
	}
}

class Circle extends Figure {
	void area(float r) {
		a = 3.14159f * r * r;
	}
}
class Triangle extends Figure {
	void area(float b, float h) {
		a = 0.5f * b * h;
	}
}
class Rectangle extends Figure {
	void area(float l, float b) {
		a = l * b;
	}
}
class Square extends Figure {
	void area(float s) {
		a = s * s;
	}
}

class Main{
	public static void main(String[] args){
		Circle c = new Circle();
		Triangle t = new Triangle();
		Rectangle r = new Rectangle();
		Square s = new Square();

		c.area(5);
		System.out.print("\nFor Circle of radius 5 ");
		c.display();

		t.area(5, 7);
		System.out.print("\nFor Triangle of breadth 5 and height 7 ");
		t.display();

		r.area(8, 7);
		System.out.print("\nFor Rectangle of length 8 and breadth 7 ");
		r.display();

		s.area(9);
		System.out.print("\nFor Square of size 9 ");
		s.display();
	}
}