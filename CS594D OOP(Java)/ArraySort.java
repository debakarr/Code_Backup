import java.util.*;

class ArraySort {
	int[] sortArrayAsc(int[] arr) {
		int temp;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return (arr);
	}

	int[] sortArrayDes(int[] arr) {
		int temp;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		return (arr);
	}

	void inputArray(int[] a, Scanner in) {
		for (int i = 0; i < a.length; i++)
			a[i] = in.nextInt();
	}

	void displayArray(int[] a) {
		for (int i = 0; i < a.length; i++)
			System.out.print(a[i] + " ");
	}
}

class Main {
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		ArraySort a = new ArraySort();

		System.out.print("\nEnter the number of elements in array: ");
		int num = in.nextInt();

		int A[] = new int[num];
		System.out.println("\nEnter the array: ");
		a.inputArray(A, in);

		in.close();

		a.sortArrayAsc(A);
		System.out.println("\nArray after sorting in ascending order: ");
		a.displayArray(A);

		a.sortArrayDes(A);
		System.out.println("\nArray after sorting in decending order: ");
		a.displayArray(A);
	}
}