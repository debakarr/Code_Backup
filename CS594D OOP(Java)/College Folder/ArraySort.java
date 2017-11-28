class ArraySort{
	void decSort(int a[]){
		int temp;
		for(int i=0;i<a.length;i++){
			for(int j = 0;j<a.length;j++){
				if(a[i]>a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	void ascSort(int a[]){
		int temp;
		for(int i=0;i<a.length;i++){
			for(int j = 0;j<a.length;j++){
				if(a[i]<a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
}

class Main{
	static void displayArr(int a[]){
		for(int i = 0;i<a.length;i++)
			System.out.print(a[i] + " ");	
	}

	public static void main(String[] args){
		int a[] = {20, 7, 3, 1, 9, 2, 0};
		ArraySort arr = new ArraySort();

		System.out.println("\nArray Before Sorting: ");
		displayArr(a);
		
		arr.decSort(a);
		System.out.println("\nArray After Sorting in descending order: ");
		displayArr(a);

		arr.ascSort(a);
		System.out.println("\nArray After Sorting in ascending order: ");
		displayArr(a);
	}
}
