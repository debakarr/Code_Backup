import java.io.*;

class Person{
	int age;
	float salary;
	char gender;
	String name;
	
	void getData(String name, int age, float salary, char gender){
		this.name = name;
		this.salary = salary;
		this.age = age;
		this.gender = gender;
	}

	void showData(){
		System.out.println("\nName: " + name + "\nAge: "+ age +"\nGender: " + gender + "\nSalary: " + salary);
	}
}

class Main {
	public static void main(String[] args) throws IOException{
		int age;
		float salary;
		char gender;
		String name;

		InputStreamReader i = new InputStreamReader(System.in);
		BufferedReader r = new BufferedReader(i);
	

		System.out.print("\nEnter person's name: ");
		name = r.readLine();
		System.out.print("\nEnter age of a person: ");
		age = Integer.parseInt(r.readLine());
		System.out.print("\nEnter salary of person: ");
		salary = Float.parseFloat(r.readLine());
		System.out.print("\nEnter the gender of person(M/F): ");
		gender = r.readLine().charAt(0)ge;

		Person p = new Person();
		p.getData(name, age, salary, gender);
		p.showData();
	}
}
