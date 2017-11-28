class Shape{
	void calculateVolume(float r){
		System.out.println("Volume of Sphere with radius " + r + " = " + ((4.0/3)*3.14*r*r));
	}

	void calculateVolume(float r, float h){
		System.out.println("Volume of Cone with height = " + h + " and radius = " + r + " = " + ((1.0/3)*r*r*h));
	}

	void calculateVolume(float l, float b, float h){
		System.out.println("Volume of Box with length = " + l + ", breadth = " + b + " and height = " + h + " = "+ l*b*h);
	}
}

class Main{
	public static void main(String[] args){
		Shape s = new Shape();
		if(args.length == 1)
			s.calculateVolume(Float.parseFloat(args[0]));
		else if(args.length == 2)
			s.calculateVolume(Float.parseFloat(args[0]), Float.parseFloat(args[1]));
		else if(args.length == 3)
			s.calculateVolume(Float.parseFloat(args[0]), Float.parseFloat(args[1]), Float.parseFloat(args[2]));
		else
			System.out.println("Error. Please check number of arguments.");		
	}
}
