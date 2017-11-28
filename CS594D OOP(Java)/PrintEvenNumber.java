class PrintEvenNumber implements Runnable {
	public void run() {
		for (int i = 2; i <= 50; i += 2) {
			System.out.println(i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				System.out.println(e.getMessage());
			}
		}
	}
}

class Main {
	public static void main(String[] args) {
		PrintEvenNumber pen = new PrintEvenNumber();

		Thread t = new Thread(pen);
		t.start();
	}
}