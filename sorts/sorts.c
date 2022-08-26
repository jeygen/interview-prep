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
Space: O(log n)

function QUICKSORT(ARRAY, START, END)			
    # base case size <= 1	
    if START >= END then		
        return						      
    end if							         
    PIVOTINDEX = PARTITION(ARRAY, START, END)
    QUICKSORT(ARRAY, START, PIVOTINDEX – 1)	
    QUICKSORT(ARRAY, PIVOTINDEX + 1, END)		
end function		

function PARTITION(ARRAY, START, END)			
    PIVOTVALUE = ARRAY[END]				        
    PIVOTINDEX = START					        
    loop INDEX from START to END			
        if ARRAY[INDEX] <= PIVOTVALUE	
            TEMP = ARRAY[INDEX]       
            ARRAY[INDEX] = ARRAY[PIVOTINDEX]	
            ARRAY[PIVOTINDEX] = TEMP			
            PIVOTINDEX = PIVOTINDEX + 1		  
        end if						           
    end loop							        
    return PIVOTINDEX – 1		

*/

#include <stdio.h>
  
void swap(int*, int*);
void bubble_sort(int*, int);
  
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
        if (start >= end) {
                return;
        }
        int pivotindex = partition(a, start, end);
        quicksort(a, start, pivotindex-1);
        quicksort(a, pivotindex+1, end);
}

int partition(int* a, int start, int end) {
        int pivotvalue = a[end];
        int pivotindex = start;
        int j;
        for (j=start; j<end; j++) {
                if (a[j] <= pivotvalue) {
                        swap(&a[pivotindex], &a[j]);
                        pivotindex++;
                }
        }
        return pivotindex-1;
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
