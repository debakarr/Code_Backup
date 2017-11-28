class Triangle{
	float b;
	float h;
	Triangle(float b, float h){
		this.b = b;
		this.h = h;	
	}

	float calculateArea(){
		return(.5f*b*h);
	}
}

class Main{
	public static void main(String[] args){
		float b = Float.parseFloat(args[0]), h = Float.parseFloat(args[1]);
		Triangle t = new Triangle(b, h);
		System.out.println("Area of Triangle with base " + b + " and height " + h +" = "+ t.calculateArea() + " sq units.");
	}
}
