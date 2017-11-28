class PrintHello{
	public void printHello(){
		System.out.println("\nHello");
	}
}

class ToBeCalled implements Runnable{
	public void run(){
		PrintHello ph = new PrintHello();
		synchronized(ph){
			System.out.println("\nStart ToBeCall Thread: ");		
			ph.printHello();
			try{
				Thread.sleep(1000);
			}catch(InterruptedException ie){}
			System.out.println("\nComplete ToBeCall Thread: ");
		}
		System.out.println("\nOutside ToBeCall synchronized");		
	}
}

class CallAgain implements Runnable{
	public void run(){
		PrintHello ph = new PrintHello();
		synchronized(ph){
			System.out.println("\nStart CallAgain Thread: ");		
			ph.printHello();
			try{
				Thread.sleep(1000);
			}catch(InterruptedException ie){}
			System.out.println("\nComplete CallAgain Thread: ");	
		}
		System.out.println("\nOutside CallAgain synchronized");
	}
}

class Main{
	public static void main(String[] args){
		ToBeCalled tbc = new ToBeCalled();
		CallAgain ca = new CallAgain();
	
		Thread t1 = new Thread(tbc);
		Thread t2 = new Thread(ca);

		t1.start();
		t2.start();				
	}
}
