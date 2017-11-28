class EvenNumberThread implements Runnable{
	public void run(){
		for(int i=2;i<=50;i+=2){
			System.out.println(i);
			try{
				Thread.sleep(1000);
			}catch(InterruptedException ie){}	
		}
	}
}

class Main{
	public static void main(String args[]){
		EvenNumberThread ent = new EvenNumberThread();
		
		Thread t = new Thread(ent);
		t.start();	
	}
}
