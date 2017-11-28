import java.util.*;

abstract class Plan{
	float rate;

	abstract void getRate();
	
	float calculateBill(){
		return(250*rate);
	};
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

		System.out.println("\nCommercial electric bill for 250 units = " + c.calculateBill());
		System.out.println("\nDomestic electric bill for 250 units = " + d.calculateBill());
		System.out.println();
		
	}
}
