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
						
					
					
