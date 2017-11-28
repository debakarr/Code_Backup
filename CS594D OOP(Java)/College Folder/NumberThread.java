class Square extends Thread{
	public void run(){
		for(int i=1;i<=10;i++){
			System.out.println("\nSquare of "+i+" is: "+i*i);
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException io){}
		}
	}
}

class Main{
	public static void main(String args[]){
		Square s = new Square();
		s.start();
		for(int i=1;i<=10;i++){
			System.out.println("\nCube of "+i+" is: "+i*i*i);
			try{
			Thread.sleep(1000);
			}
			catch(InterruptedException io){}
		}	
	}
}
