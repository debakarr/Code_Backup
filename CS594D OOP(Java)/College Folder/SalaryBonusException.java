import java.util.Scanner;

class SalaryBonusException extends Exception{
	SalaryBonusException(){
		super("Exception: Salary is too small for bonus.");
	}
	
	SalaryBonusException(String msg){
		super(msg);
	}
}
class Main{
	public static void main(String args[]){
		float sal;
		Scanner sc = new Scanner(System.in);		
		System.out.print("\nEnter the salary: ");
		sal = sc.nextFloat();

		try{
			if(sal<10000.0f)
				throw(new SalaryBonusException());
			System.out.printf("Bonus: %.2f\n", sal*.1);
		}catch(SalaryBonusException sbe){
			System.out.println(sbe.getMessage());
		}		
	}
}
