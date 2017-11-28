import java.util.Scanner;

class NumberTooSmall extends Exception{
	NumberTooSmall(){
		super("Exception: number is too small");
	}

	NumberTooSmall(String msg){
		super(msg);
	}
}

class Main{
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);

		System.out.print("\nEnter the number: ");
		n = sc.nextInt();

		try{
			if(n<100)
				throw new NumberTooSmall();
			System.out.println(n);
		}catch(NumberTooSmall nts){
			System.out.println(nts.getMessage());
		}
	}
}