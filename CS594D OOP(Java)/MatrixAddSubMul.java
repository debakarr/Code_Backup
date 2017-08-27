import java.util.*;

class MatrixAddSubMul {
	int[][] addMatrix(int[][] a, int[][] b) {
		int sum[][] = new int[a.length][a[0].length];
		for (int i = 0; i < sum.length; i++) {
			for (int j = 0; j < sum[0].length; j++)
				sum[i][j] = a[i][j] + b[i][j];
		}
		return (sum);
	}

	int[][] subMatrix(int[][] a, int[][] b) {
		int dif[][] = new int[a.length][a[0].length];
		for (int i = 0; i < dif.length; i++) {
			for (int j = 0; j < dif[0].length; j++)
				dif[i][j] = a[i][j] - b[i][j];
		}
		return (dif);
	}

	int[][] mulMatrix(int[][] a, int[][] b) {
		int mul[][] = new int[a.length][b[0].length];
		int sum = 0;
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < b[0].length; j++) {
				for (int k = 0; k < b.length; k++)
					sum = sum + a[i][k] * b[k][j];
				mul[i][j] = sum;
				sum = 0;
			}

		}
		return (mul);
	}

	void displayMatrix(int a[][]) {
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[0].length; j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println();
		}
	}

	void inputMatrix(int a[][]) {
		Scanner in = new Scanner(System.in);

		for (int i = 0; i < a.length; i++)
			for (int j = 0; j < a[0].length; j++)
				a[i][j] = in.nextInt();
	}
}

class Main {
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		int r1, r2, c1, c2, n;
		char c;
		MatrixAddSubMul m = new MatrixAddSubMul();

		System.out.println("\nEnter the row and columns for 1st Matrix: ");
		r1 = in.nextInt();
		c1 = in.nextInt();

		System.out.println("\nEnter the row and columns for 2nd Matrix: ");
		r2 = in.nextInt();
		c2 = in.nextInt();

		int a[][] = new int[r1][c1];
		int b[][] = new int[r2][c2];

		System.out.println("\nEnter matrix A: ");
		m.inputMatrix(a);
		System.out.println("\nEnter matrix B: ");
		m.inputMatrix(b);

		do {
			System.out.println("\nWhat operation you want to perform in Matrix A and B?");
			System.out.print("\n1. Addition\n2. Subtraction \n3. Multiplication\nEnter your choice: ");

			int choice = in.nextInt();

			switch (choice) {
			case 1:
				if (r1 == r2 && c1 == c2) {
					int[][] sum = m.addMatrix(a, b);
					System.out.println("\nAddition of matrix A and B is: ");
					m.displayMatrix(sum);
				} else
					System.out.println("\nrow and columns needed to be same for matrix addition.");
				break;

			case 2:
				if (r1 == r2 && c1 == c2) {
					int[][] dif = m.subMatrix(a, b);
					System.out.println("\nSubtraction of matrix A and B is: ");
					m.displayMatrix(dif);
				} else
					System.out.println("\nrow and columns needed to be same for matrix addition.");
				break;

			case 3:
				if (r1 == r2 && c1 == c2) {
					int[][] mul = m.mulMatrix(a, b);
					System.out.println("\nMultiplication of matrix A and B is: ");
					m.displayMatrix(mul);
				} else
					System.out.println("\nColumn of Matrix A and row of Matrix B should be same.");
				break;

			default:
				System.out.println("\nPlease enter a valid option.");
			}
			System.out.print("\nWant to check more?(Y/N): ");
			c = in.next().charAt(0);
		} while (c == 'Y' || c == 'y');
	}
}