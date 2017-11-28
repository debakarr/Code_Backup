import java.util.*;

class StudentTest{
	int rollNumber;
	float maths, chemistry;

	void getRollNumber(int rollNumber){
		this.rollNumber = rollNumber;
	}

	void getMarks(float maths, float chemistry){
		this.maths = maths;
		this.chemistry = chemistry;
	}

	void displayRollNumber(){
		System.out.println("Roll number: "+rollNumber);
	}

	void displayMarks(){
		System.out.println("Maths: "+maths);
		System.out.println("Chemistry: "+chemistry);
	}
}

interface Sports{
	float sportWt = 10.0f;
	void displayWt();
}

class Result extends StudentTest implements Sports{
	void displayResult(){
		System.out.println("Total Marks = "+ (maths+chemistry+sportWt));
	}

	public void displayWt(){
		System.out.println("Sport Wt: "+sportWt);
	}
}

class Main{
	public static void main(String[] args){

		Scanner in = new Scanner(System.in); 

		int rollNumber;
		float maths, chemistry;

		System.out.println("Enter Student data: ");
		System.out.print("\nEnter Roll number: ");
		rollNumber = in.nextInt();
		System.out.print("Enter marks for Maths and Chemistry: ");
		maths = in.nextFloat();
		chemistry = in.nextFloat();

		System.out.println("\nResults: ");

		Result r = new Result();
		r.getRollNumber(rollNumber);
		r.getMarks(maths, chemistry);
		r.displayRollNumber();
		r.displayMarks();
		r.displayWt();
		r.displayResult();
	}
}


