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
}

class Main {
	public static void main(String[] args) {
		int[][] a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
		int[][] b = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

		MatrixAddSubMul m = new MatrixAddSubMul();

		int[][] sum = m.addMatrix(a, b);
		int[][] dif = m.subMatrix(a, b);
		int[][] mul = m.mulMatrix(a, b);

		System.out.println("\nMatrix A: ");
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[0].length; j++)
				System.out.print(a[i][j] + " ");
			System.out.println();
		}

		System.out.println("\nMatrix B: ");
		for (int i = 0; i < b.length; i++) {
			for (int j = 0; j < b[0].length; j++)
				System.out.print(b[i][j] + " ");
			System.out.println();
		}

		System.out.println("\nAddition of Matrix A and Matrix B: ");
		for (int i = 0; i < sum.length; i++) {
			for (int j = 0; j < sum[0].length; j++)
				System.out.print(sum[i][j] + " ");
			System.out.println();
		}

		System.out.println("\nSubtract of Matrix A and Matrix B: ");
		for (int i = 0; i < dif.length; i++) {
			for (int j = 0; j < dif[0].length; j++)
				System.out.print(dif[i][j] + " ");
			System.out.println();
		}

		System.out.println("\nMultiplication of Matrix A and Matrix B: ");
		for (int i = 0; i < mul.length; i++) {
			for (int j = 0; j < mul[0].length; j++)
				System.out.print(mul[i][j] + " ");
			System.out.println();
		}
	}
}