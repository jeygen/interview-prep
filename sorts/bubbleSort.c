/*
Bubble Sort
Time: O(n^2)
Space: O(1)

bubble(A)
for (i=0; i<A.length-1; i++)
	for(j=0; j <A.length-1- i; j++)
		if A[j] > A[j+1]
			swap(A[j], A[j+1])
*/

#include <stdio.h>
  
void swap(int* x, int* y);
  
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
  
int main(void) {
	int i;
	int a[] = {43, 22, 12, 433, 1, 432, 12};
	int length = sizeof(a)/sizeof(a[0]);

	bubble_sort(a, length);

	for(i=0; i < length; i++)
		printf("%d ", a[i]);

	return 0;
}
