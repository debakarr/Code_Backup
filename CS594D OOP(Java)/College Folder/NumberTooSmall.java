import java.util.Scanner;

class NumberTooSmall extends Exception{
	NumberTooSmall(){
		super("Number is too small");
	}

	NumberTooSmall(String msg){
		super(msg);
	}
}
class Main{
	public static void main(String args[]){
		int num;
		Scanner sc = new Scanner(System.in);		
		System.out.print("\nEnter the number: ");
		num = sc.nextInt();

		try{
			if(num<10)
				throw(new NumberTooSmall());
			System.out.println(num);
		}catch(NumberTooSmall nts){
			System.out.println(nts.getMessage());
		}		
	}
}
