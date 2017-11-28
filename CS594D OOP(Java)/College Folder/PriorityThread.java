class PriorityThread extends Thread{
	public void run(){
		System.out.println(getName());
		for(int i = 1;i<=5;i++){
			System.out.println("\nInside "+getName()+": "+i);
			try{
				Thread.sleep(1000);
			}catch(InterruptedException ie){}
		}
	}
}

class Main{
	public static void main(String[] args){
		PriorityThread t1 = new PriorityThread();
		PriorityThread t2 = new PriorityThread();

		t1.setName("Thread #1");
		t2.setName("Thread #2");
		
		t2.setPriority(Thread.MAX_PRIORITY);
		t1.setPriority(Thread.MIN_PRIORITY);

		t1.start();
		t2.start();				
	}
}
