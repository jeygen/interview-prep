/*
Bubble Sort
Time: O(n^2)
Space: O(1)
bubble(A)
for (i=0; i<A.length-1; i++)
	for(j=0; j <A.length-1- i; j++)
		if A[j] > A[j+1]
			swap(A[j], A[j+1])

Quicksort
Time: O(n log n)
Space: O(log n) "in place"

1. Choose a pivot
2. Place all elements smaller than pivot to the left of pivot
3. Place all elements greater than pivot to the right of pivot
4. Quick sort the left side
5. Quick sort the right side

QuickSort(A, low, high)
        if low < high // insures at least two ele, and correct args
            p = partition(A, low, high)
            QuickSort(A, low, p-1)
            QuickSort(A, p+1, high)

Partition(A, low, high)
        pivot = A[high] // selects last element as pivot, can be any
        // search for elements smaller than pivot
        i = low - 1 // index of smaller element, starts at -1 and counts up to locates smaller element to swap
        for j = low, j < high, j++
            if A[j] <= pivot // if current element is smaller than pivot
                i = i + 1 // increment index of smaller element
                swap A[i] with A[j]
        swap A[i+1] with A[high] // puts pivot left of higher elements
        return i + 1 // returns pivot location
*/

#include <stdio.h>
  
void swap(int*, int*);
void bubble_sort(int*, int);
void quick_sort(int*, int, int);
int partition(int*, int, int);

void swap(int* x, int* y) {
	int temp = *x;
        *x = *y;
        *y = temp;
}  
  
void bubble_sort(int* a, int length) {
        int i, j;
        for (i=0; i<length-1; i++) {
                for(j=0; j <length-1-i; j++) {
                        if (a[j] > a[j+1]) {
                                swap(&a[j], &a[j+1]);
                        }
                }
        }
}

void quicksort(int* a, int start, int end) {
        if (start < end) {
                int pivotindex = partition(a, start, end);
                quicksort(a, start, pivotindex-1); // sort left side
                quicksort(a, pivotindex+1, end); // sort right side
        }
}

int partition(int* a, int start, int end) {
        int pivotvalue = a[end];
        int swap_index = start - 1;
        int j;
        for (j=start; j<end; j++) {
                if (a[j] <= pivotvalue) {
                        swap_index++;
                        swap(&a[swap_index], &a[j]);
                }
        }
        swap(&a[swap_index+1], &a[end]); // double check this method 
        return swap_index+1; // returns new pivot location
}
  
int main(void) {
	int i;
	int a[] = {43, 22, 12, 433, 1, 432, 12};
	int length = sizeof(a)/sizeof(a[0]);

	//bubble_sort(a, length);
        quicksort(a, 0, length-1);

	for(i=0; i < length; i++)
		printf("%d ", a[i]);

	return 0;
}