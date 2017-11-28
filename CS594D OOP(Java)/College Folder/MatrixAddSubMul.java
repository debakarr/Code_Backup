import java.util.*;

class MatricAddSubMul{
	int [][]addMatrix(int a[][], int b[][]){
		int [][] t = new int[a.length][a[0].length];
		for(int i = 0;i<a.length;i++)
			for(int j = 0;j<a[0].length;j++)
				t[i][j] = a[i][j] + b[i][j];
		return(t);
	}
	
	int [][]subMatrix(int a[][], int b[][]){
		int [][] t = new int[a.length][a[0].length];
		for(int i = 0;i<a.length;i++)
			for(int j = 0;j<a[0].length;j++)
				t[i][j] = a[i][j] - b[i][j];
		return(t);
	}

	int [][]mulMatrix(int a[][], int b[][]){
		int [][] t = new int[a.length][b[0].length];
		int sum = 0;
		for(int i = 0;i<a.length;i++){
			for(int j = 0;j<a[0].length;j++){
				sum = 0;
				for(int k = 0;k<b.length;k++)
					sum = sum + a[i][k]*b[k][j];
				t[i][j] = sum;
			}
		}
				
		return(t);
	}
	
	void displayArr(int [][]a){
		for(int i=0;i<a.length;i++){
			for(int j=0;j<a[0].length;j++)
				System.out.print(a[i][j] + " ");
			System.out.println();
		}
	}

	void matrixInput(int [][]a){
		Scanner in = new Scanner(System.in);
		for(int i = 0;i<a.length;i++)
			for(int j=0;j<a[0].length;j++)
				a[i][j] = in.nextInt();
	}
}

class Main{
	public static void main(String[] args){
		int r1, r2, c1, c2;
		char c;
		MatricAddSubMul m = new MatricAddSubMul();
		Scanner in = new Scanner(System.in);

		System.out.print("\nEnter number of rows and column for Matrix A: ");
		r1 = in.nextInt();
		c1 = in.nextInt();		
		
		System.out.print("\nEnter number of rows and column for Matrix B: ");
		r2 = in.nextInt();
		c2 = in.nextInt();

		int a[][] = new int[r1][c1];
		System.out.println("\nEnter Matrix A: ");
		m.matrixInput(a);

		int b[][] = new int[r2][c2];
		System.out.println("\nEnter Matrix B: ");
		m.matrixInput(b);		
		
		do{
			System.out.println("\n1.Addition\n2.Subtact\n3.Multiplication\nEnter your choice: ");
			int choice = in.nextInt();

			switch(choice){
				case 1:
					if(r1 ==r2 && c1 == c2){
						int [][]sum = m.addMatrix(a, b);
						System.out.println("\nSum of Matrix A and B is: ");
						m.displayArr(sum);
					}
					else
						System.out.println("Make sure dimension of matrix is same.");
					break;
				case 2:
					if(r1 == r2 && c1 == c2){
						int [][]dif = m.subMatrix(a, b);
						System.out.println("\nDifference of Matrix A and B is: ");
						m.displayArr(dif);
					}
					else
						System.out.println("Make sure dimension of matrix is same.");
					break;
				case 3:
					if(c1 == r2){
						int [][]mul = m.mulMatrix(a, b);
						System.out.println("\nMultiplication of Matrix A and B is: ");
						m.displayArr(mul);
					}
					else
						System.out.println("Make sure dimension of matrixes are correct.");
					break;
				default:
					System.out.println("\nInvalid Input.");
				
			}
			System.out.print("\nWant to check again?(Y/N): ");
			c = in.next().charAt(0);
		}while(c == 'Y' || c == 'y');
	}
}
