import MyPackage.ComplexNumber;
import java.util.Scanner;

class ComplexNumberImp{
	public static void main(String[] args) {
		int i, r;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the real and imaginary term for 1st complex number: ");
		r = sc.nextInt();
		i = sc.nextInt();

		ComplexNumber c1 = new ComplexNumber(r, i);

		System.out.print("Enter the real and imaginary term for 2nd complex number: ");
		r = sc.nextInt();
		i = sc.nextInt();

		ComplexNumber c2 = new ComplexNumber(r, i);

		ComplexNumber.Add(c1, c2);
	}
}

/*
$ javac ComplexNumberImp.java
$ java ComplexNumberImp

Enter the real and imaginary term for 1st complex number: 5 6
Enter the real and imaginary term for 2nd complex number: 3 2
(5 + 6i) + (3 + 2i) = (8 + 8i)
*/