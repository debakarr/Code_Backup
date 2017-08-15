class CubeOfNumbers {
	void calculateCube(int n) {
		for (int i = 1; i <= n; i++)
			System.out.println(i + "^3 = " + i * i * i);
	}
}

class Main {
	public static void main(String[] args) {
		CubeOfNumbers c = new CubeOfNumbers();

		c.calculateCube(Integer.parseInt(args[0]));
	}
}

