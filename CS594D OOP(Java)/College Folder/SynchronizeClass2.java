class PrintHello {
	public void printHello() {
		System.out.println("Locking PrintHello...");
	}
}

class ThreadDemo extends Thread {
	PrintHello  p;

	ThreadDemo(PrintHello p) {
		this.p = p;
	}

	public void run() {
		synchronized (p) {
			System.out.println("Entering " +  getName() + ":");
			p.printHello();
		}
		System.out.println("Exiting " +  getName() + "...\n");
	}
}

class Main {

	public static void main(String args[]) {
		PrintHello p = new PrintHello();

		ThreadDemo t1 = new ThreadDemo(p);
		ThreadDemo t2 = new ThreadDemo(p);

		t1.setName("Thread #1");
		t2.setName("Thread #2");

		t1.start();
		t2.start();
	}
}