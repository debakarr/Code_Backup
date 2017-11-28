class SimpleInterest{
	float principal;
	int rate, time;
	
	SimpleInterest(float principal, int rate, int time){
		this.principal = principal;
		this.rate = rate;
		this.time = time;
	}

	float calculateInterest(){
		return(0.01f*principal*rate*time);
	}
}

class Main{
	public static void main(String[] args){
		
		float p = Float.parseFloat(args[0]);
		int r = Integer.parseInt(args[1]), t = Integer.parseInt(args[2]);

		SimpleInterest s = new SimpleInterest(p, r, t);
		System.out.println("Simple interest of Rs." + p + " at the rate of " + r +"% for " + t + " years = Rs." + s.calculateInterest());
	}
}
