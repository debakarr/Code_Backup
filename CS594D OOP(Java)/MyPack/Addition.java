//Name of the package should be same
//as the folder under which file is saved
package MyPack;

//Addition class definition
//Class and methods should be public for outside class access
public class Addition {
    //Instance variables
	int a, b;

    //Parameterize Constructor
	public Addition(int a, int b) {
		this.a = a;
		this.b = b;
	}

    //Add method to add two number and display the output
	public void Add() {
		System.out.println(a + " + " + b + " = " + (a + b));
	}
}
