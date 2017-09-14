//Abstract Plan class definition
abstract class Plan{
	float rate; // Instance variable

	//Abstarct getRate method
	abstract void getRate();

	//Concrete calculateBill method
	float calculateBill(){
		return(rate*250.0f);
	}
}

class CommercialPlan extends Plan{
	void getRate(){
		rate = 5.0f;
	}
}

class DomesticPlan extends Plan{
	void getRate(){
		rate = 2.5f;
	}
}

class Main{
	public static void main(String[] args){
		CommercialPlan c = new CommercialPlan();
		DomesticPlan d = new DomesticPlan();

		c.getRate();
		d.getRate();

		System.out.println("Commerical Plan rate for 250 units = " + c.calculateBill());
		System.out.println("Domestic Plan rate for 250 units = " + d.calculateBill());
	}
}

/*
$ javac Plan.java
$ java Main
Commerical Plan rate for 250 units = 1250.0
Domestic Plan rate for 250 units = 625.0
*/