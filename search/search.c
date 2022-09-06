/*
Binary Search
T: O(logn)
For sorted arrays

    binarySearch(arr, x, low, high)
           if low > high
               return False 
   
           else
               mid = (low + high) / 2 
                   if x == arr[mid]
                   return mid
       
               else if x > arr[mid]        // x is on the right side
                   return binarySearch(arr, x, mid + 1, high)
               
               else                        // x is on the right side
                   return binarySearch(arr, x, low, mid - 1) 
*/

#include <stdio.h>

int binary_Search(int* arr, int x, int low, int high) {
	int mid = low + (high - low) / 2;

	if (low > high) {
		return -1;
	}
	else if (x == arr[mid]) {
		return mid;
	}
	else if (x > arr[mid]) {
		binary_Search(arr, x, mid+1, high);
	}
	else if (x < arr[mid]) {
		binary_Search(arr, x, low, mid-1);
	}		
	else {
		return -1;
	}
}

int linear_Search(int* arr, int x, int length) {
	int i;
	for (i=0; i<length; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int a[] = {1,44,88,2341,12343,132413,1241212};
	int length = sizeof(a)/sizeof(a[0]);
	printf("Element position is %d\n", binary_Search(a, 2341, 3, 3)); 
	printf("Element position is %d\n", linear_Search(a, 12343, length)); 
	return 0;
}

