public class Sorts {
	
	int[] bubbleSort(int[] arr) {
		int i, j, temp;
		for (i=0; i<arr.length-1; i++) {
			for (j=0; j<arr.length-1-i; j++) {
				if (arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	return arr;
	}

	public static void main(String[] args) {
		int[] arr = {33,234,1,2,345,5};
		Sorts s = new Sorts();
		arr = s.bubbleSort(arr);
		for(int i : arr) {
			System.out.println(i);
		}
	}
}
						
					
					
