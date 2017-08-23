import java.io.*;

class Person {
	//Instance variables
	String name;
	int age;
	char gender;
	float salary;

	//Method to input Data provided by the user
	void inputData(String name, int age, char gender, float salary) {
		this.name = name;
		this.age = age;
		this.gender = gender;
		this.salary = salary;
	}

	//Method to display data
	void displayData() {
		System.out.println("\nName: " + name + "\nAge: " + age + "\nGender: " + gender + "\nSalary: " + salary);
	}
}

class Main {
	public static void main(String[] args) throws IOException {
		String name;
		int age;
		char gender;
		float salary;

		//
		Person p = new Person();

		//Open up standard input, and buffer it
		InputStreamReader i = new InputStreamReader(System.in);
		BufferedReader r = new BufferedReader(i);

		//Take input from user interactively
		//use readLine method of BufferedReader class
		//to take input from user
		//Use parseInt and parseFloat method of wrapper class to take age and salary respectively
		//i.e parsing string into int and float respectively
		//We can also use valueOf method but parseInt is returning primitive int whereas valueOf returns a new Integer()
		//charAt method can be use to take gender input
		System.out.print("\nEnter your name: ");
		name = r.readLine();
		System.out.print("\nEnter the age: ");
		age = Integer.parseInt(r.readLine());
		System.out.print("\nEnter the gender: ");
		gender = r.readLine().charAt(0);
		System.out.print("\nEnter the salary: ");
		salary = Float.parseFloat(r.readLine());

		//Call instance method of class Person
		p.inputData(name, age, gender, salary);
		p.displayData();
	}
}

/*

$ javac Person.java
$ java Main

Enter your name: Debakar Roy

Enter the age: 20

Enter the gender: M

Enter the salary: 50000

Name: Debakar Roy
Age: 20
Gender: M
Salary: 50000.0

*/