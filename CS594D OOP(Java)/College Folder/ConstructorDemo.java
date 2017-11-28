class ConstructorDemo{
	int a, b, num;
	
	ConstructorDemo(){
		num = 0;
		this.a = a;
		System.out.println("0 argument passed to the constructor");
	}

	ConstructorDemo(int a){
		num = 1;
		this.a = a;
		System.out.println("1 argument passed to the constructor");
	}

	ConstructorDemo(int a, int b){
		num = 2;
		this.a = a;
		this.b = b;
		System.out.println("2 argument passed to the constructor");
	}
	
	void printValue(){
		System.out.println("a = " + a + " b = " + b);
	}
}
class Main{
	public static void main(String[] args){
		ConstructorDemo c1 = new ConstructorDemo();
		c1.printValue();
		ConstructorDemo c2 = new ConstructorDemo(4);
		c2.printValue();
		ConstructorDemo c3 = new ConstructorDemo(5, 6);
		c3.printValue();
	}
}
