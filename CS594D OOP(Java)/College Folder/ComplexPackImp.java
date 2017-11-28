import MyPackage.*;

class Main{
	public static void main(String[] args){
		ComplexNumber c1 = new ComplexNumber(5, 7);
		ComplexNumber c2 = new ComplexNumber(8, 2);

		ComplexNumber.Add(c1, c2);
	}
}
