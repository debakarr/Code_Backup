//Name of the package should be same
//as the folder under which file is saved
package MyPack;

//Subtaction class definition
//Class and methods should be public for outside class access
public class Subtraction {
    //Instance variables
	int a, b;

    //Parameterize Constructor
	public Subtraction(int a, int b) {
		this.a = a;
		this.b = b;
	}

    //Dif method to subtract two number and display the output
	public void Dif() {
		System.out.println(a + " - " + b + " = " + (a - b));
	}
}
