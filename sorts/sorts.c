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
#define N 4 // Number of elements in the sets
  
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

/*
 * Propose and Reject (Gale-Shapely 1962)
 *
 * Finds stable match relative to desired group
 *
 * O(n^2) 
 */


// Preference list for each element, where the first index represents the element and the subsequent indices represent their preferences
int prefer[2*N][N] = {
    {3, 2, 1, 0}, // Element 0 (man) preferences: {3, 2, 1, 0}
    {3, 2, 0, 1}, // Element 1 (man) preferences: {3, 2, 0, 1}
    {0, 1, 2, 3}, // Element 2 (woman) preferences: {0, 1, 2, 3}
    {0, 1, 3, 2}, // Element 3 (woman) preferences: {0, 1, 3, 2}
    {2, 3, 0, 1}, // Element 4 (woman) preferences: {2, 3, 0, 1}
    {2, 3, 1, 0}, // Element 5 (woman) preferences: {2, 3, 1, 0}
    {1, 0, 2, 3}, // Element 6 (woman) preferences: {1, 0, 2, 3}
    {1, 0, 3, 2}  // Element 7 (woman) preferences: {1, 0, 3, 2}
};

// Function to find stable matching using Gale-Shapley algorithm
void stable_matching(int n) {
    int wPartner[N]; // Array to store current partners of women
    bool mFree[N];   // Array to store whether men are free or not
    memset(wPartner, -1, sizeof(wPartner)); // Initialize all partners to -1
    memset(mFree, false, sizeof(mFree));    // Initialize all men to be not free
    int freeCount = n;

    // Iterate until all men have a partner
    while (freeCount > 0) {
        int m;
        for (m = 0; m < n; m++)
            if (!mFree[m])
                break;

        for (int i = 0; i < n && !mFree[m]; i++) {
            int w = prefer[m][i]; // Get the highest-ranked woman from man's preference list

            if (wPartner[w - n] == -1) { // If the woman is not currently engaged
                wPartner[w - n] = m;  // Engage the woman with the man
                mFree[m] = true;     // Mark the man as engaged
                freeCount--;         // Decrement the number of free men
            } else {
                int m1 = wPartner[w - n]; // Get the current partner of the woman
                if (prefer[w][m] < prefer[w][m1]) { // If the woman prefers the new man over her current partner
                    wPartner[w - n] = m;  // Engage the woman with the new man
                    mFree[m] = true;     // Mark the new man as engaged
                    mFree[m1] = false;   // Mark the previous man as not engaged
                }
            }
        }
    }

    // Print the stable matching
    printf("Woman   Man\n");
    for (int i = 0; i < n; i++)
        printf(" %d     %d);
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
