import java.util.*;

class Employee{
	String employeeName;
	String address;

	Employee(){
		employeeName = null;
		address = null;
	}

	Employee(String employeeName, String address){
		this.employeeName = employeeName;
		this.address = address;
	}

/*
	String getEmployeeName(){
		return(employeeName);
	}
	
	String getAddress(){
		return(address);
	}
*/
/*
	void getEmpData(Scanner in){
		//Scanner in = new Scanner(System.in);
		System.out.print("\nEnter Employee name: ");
		employeeName = in.nextLine();
		System.out.print("\nEnter the address: ");
		address = in.nextLine();
		//in.close();
	}
*/

	void display(){
		System.out.println("Employee Name: "+employeeName);
		System.out.println("Address: "+address);
	}	
}

class Scientist extends Employee{
	String subjectPublication;
	int numberOfProjects;
	String typeOfProjects;

	Scientist(){
		subjectPublication = null;
		numberOfProjects = 0;
		typeOfProjects = null;
	}

	Scientist(String subjectPublication, int numberOfProjects, String typeOfProjects, String name, String address){
		super(name, address);
		this.subjectPublication = subjectPublication;
		this.numberOfProjects = numberOfProjects;
		this.typeOfProjects = typeOfProjects;
	}

/*	
	void getScData(Scanner in){
		getEmpData(in);
		//Scanner in = new Scanner(System.in);
		System.out.print("\nEnter Publication name: ");
		subjectPublication = in.nextLine();
		System.out.print("\nEnter number of Projects: ");
		numberOfProjects = in.nextInt();
		System.out.print("\nEnter type of Project: ");
		typeOfProjects = in.nextLine();
		//in.close();
	}
*/

	void display(){
		super.display();
		System.out.println("Publication: "+subjectPublication);
		System.out.println("Number of Projects: "+numberOfProjects);
		System.out.println("Type of Project: "+typeOfProjects);
	}
}

class Engineer extends Employee{
	String basicSoftware;
	String basicHardware;

	Engineer(){
		basicSoftware = null;
		basicHardware = null;
	}

	Engineer(String basicHardware, String basicSoftware, String name, String address){
		super(name, address);
		this.basicSoftware = basicSoftware;
		this.basicHardware = basicHardware;
	}

/*
	void getEgData(Scanner in){
		getEmpData(in);
		//Scanner in = new Scanner(System.in);
		System.out.print("\nEnter Basic Software: ");
		basicSoftware = in.nextLine();
		System.out.print("\nEnter Basic Hardware: ");
		basicHardware = in.nextLine();
		//in.close();
	}
*/
	void display(){
		super.display();
		System.out.println("Basic Software: "+basicSoftware);
		System.out.println("Basic Hardware: "+basicHardware);
	}
	
}

class Worker extends Employee{
	String machineType;

	Worker(){
		machineType = null;
	}

	Worker(String machineType, String name, String address){
		super(name, address);
		this.machineType = machineType;
	}

/*
	void getWkData(Scanner in){
		getEmpData(in);
		//Scanner in = new Scanner(System.in);
		System.out.print("\nEnter Machine Type: ");
		machineType = in.nextLine();
		//in.close();
	}
*/

	void display(){
		super.display();
		System.out.println("Machine Type: "+machineType);
	}
}

class Regular extends Worker{
	float basic;
	
	Regular(){
		basic = 0.0f;
	}

	Regular(float basic, String machineType, String name, String address){
		super(machineType, name, address);
		this.basic = basic;
	}
	
/*
	void getRegData(Scanner in){
		getWkData(in);
		//Scanner in = new Scanner(System.in);
		System.out.print("\nEnter Basic Salary: ");
		basic = in.nextFloat();
		//in.close();
	}
*/

	void display(){
		System.out.println("\nData: ");
		super.display();
		System.out.println("Basic Salary: "+basic);
	}
}

class Dailywage extends Worker{
	float wages;

	Dailywage(){
		wages = 0.0f;
	}

	Dailywage(float wages, String machineType, String name, String address){
		super(machineType, name, address);
		this.wages = wages;
	}
	


	void display(){
		System.out.println("\nData: ");
		super.display();
		System.out.println("Daily wages: "+wages);
	}
} 

class Main{

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);

		int choice, subchoice;
		String employeeName, address;
		char c;
		
		do{
			System.out.print("\nChoose Category:\n1.Scientist\n2.Engineer\n3.Worker\nEnter your choice: ");
			choice = in.nextInt();

			switch(choice){
			case 1:
				String subjectPublication;
				int numberOfProjects;
				String typeOfProjects;
				in.nextLine();
				System.out.print("\nEnter Scientist name: ");
				employeeName = in.nextLine();
				System.out.print("\nEnter Address: ");
				address = in.nextLine();
				System.out.print("\nEnter Subject Publication: ");
				subjectPublication = in.nextLine();
				System.out.print("\nEnter number of Projects: ");
				numberOfProjects = in.nextInt();
				in.nextLine();	
				System.out.print("\nEnter Type of Projects: ");
				typeOfProjects = in.nextLine();

				Scientist s = new Scientist(subjectPublication, numberOfProjects, typeOfProjects, employeeName, address);
				s.display();

				break;

			case 2: 	

				String sw;
				String hw;
				in.nextLine();
				System.out.print("\nEnter Engineer name: ");
				employeeName = in.nextLine();
				System.out.print("\nEnter Address: ");
				address = in.nextLine();
				System.out.print("\nEnter Basic Software: ");
				sw = in.nextLine();	
				System.out.print("\nEnter Type of Projects: ");
				hw = in.nextLine();

				Engineer e = new Engineer(hw, sw, employeeName, address);	
				e.display();
				break;	
			case 3:
				String machineType;
				float basic, wages;
				in.nextLine();
				System.out.print("\nEnter Worker name: ");
				employeeName = in.nextLine();
				System.out.print("\nEnter Address: ");
				address = in.nextLine();
				System.out.print("\nEnter Machine Type: ");
				machineType = in.nextLine();

				System.out.println("\nChoose Category:\n1.Regular\n2.Daily Wages\nEnter your choice: ");
				subchoice = in.nextInt();

				if(subchoice == 1){
					System.out.print("\nEnter Basic Salary: ");
					basic = in.nextFloat();
					Regular r = new Regular(basic, machineType, employeeName, address);
					r.display();
				}
				else if(subchoice == 2){
					System.out.print("\nEnter Daily Wages: ");
					wages = in.nextFloat();
					Dailywage d = new Dailywage(wages, machineType, employeeName, address);
					d.display();
				}
				else
					System.out.print("\nInvalid Entry Try Again...: ");
				
				break;
			default:
				System.out.print("\nInvalid Entry Try Again...: ");			
				
			}
			in.nextLine();
			System.out.print("\nDo you want to enter more:(Y/N) ");
			c = in.nextLine().charAt(0);
		}while(c == 'y' || c == 'Y');
	}
}
