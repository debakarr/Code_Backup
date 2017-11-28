class Triangle{

	double calculateArea(double b, double h){
		return(.5f*b*h);
	}

	double calculateArea(double a, double b, double c){
		double s = (a+b+c)/2.0;
		double area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		return(area);
	}
}

class Main{
	public static void main(String[] args){

		Triangle t = new Triangle();
		if(args.length == 2){
			double b = Double.parseDouble(args[0]), h = Double.parseDouble(args[1]);
			System.out.println("Area of Triangle with base " + b + " and height " + h +" = "+ t.calculateArea(b, h) + " sq units.");
		}
		else if(args.length == 3){
			double a = Double.parseDouble(args[0]), b = Double.parseDouble(args[1]), c = Double.parseDouble(args[2]);
			System.out.println("Area of Triangle with sides " + a + ", " + b + " and "+ c +" = "+ t.calculateArea(a, b, c) + " sq units.");
		}
		else
			System.out.println("Invalid Input.");
	}
}
