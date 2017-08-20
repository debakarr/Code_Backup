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
}

class Main {
	public static void main(String[] args) {
		int[] arr1 = {6, 3, 8, 4, 9, 2, 0};
		int[] arr2 = {6, 3, 8, 4, 9, 2, 0};
		ArraySort a = new ArraySort();

		arr1 = a.sortArrayAsc(arr1);
		arr2 = a.sortArrayDes(arr2);

		for (int i = 0; i < arr1.length; i++)
			System.out.print(arr1[i] + " ");
		System.out.println();

		for (int i = 0; i < arr2.length; i++)
			System.out.print(arr2[i] + " ");
		System.out.println();
	}
}