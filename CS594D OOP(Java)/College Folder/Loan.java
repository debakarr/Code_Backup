class Loan{
	float P, R;
	int T;
	Loan(float P, float R, int T){
		this.P = P;
		this.R = R;
		this.T = T;
	}

	abstract float calculateInterest();
}

class EducationalLoan extends Loan{
	EducationalLoan(float P, float R, int T){
		super(P, R, T);	
	}

	float calculateInterest(){
		return(P*R*T*.01);	
	}	
}

class HomeLoan extends Loan{
	HomeLoan(float P, float R, int T){
		super(P, R, T);	
	}

	float calculateInterest(){
		return(P*Math.pow((1+i*.01), T)-P);
	}
}

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);

		float P, R;
		int T, choice;

		do{
			System.out.print("\n1. Educational Loan\n2. HomeLoan\nEnter your choice: ");
			choice = in.nextInt();

			System.out.print("\nEnter the principal amount: ")
			P = in.nextFloat();

			System.out.print("\nEnter the rate: ")
			R = in.nextFloat();

			System.out.print("\nEnter the number of years: ")
			T = in.nextInt();
			
			switch(choice){
			case 1: 
				EducationalLoan e = new EducationalLoan(P, R, T);
				System.out.println("\nLoan for Rs."+P+" at the rate "+R)
			}			

		}while(c == 'Y' || c =='y')
	}
}
