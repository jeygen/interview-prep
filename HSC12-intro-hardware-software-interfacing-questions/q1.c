/*
E5.7 Write a C program to fi nd the median and mode of an array of integers. When the array has 
an even number of elements, the median is defi ned as the average of the middle two elements. 
Otherwise, it is defi ned as the middle element of the array. The mode is the element that occurs 
most frequently. You need to sort the array in order to find the median.
*/

/*
median()
	sort array
	if a.length % 2 == 0
		median = (a[a.length/2] + a[(a.length - 1)])/2
	else	
		median = a[a.length/2]
mode()
	mode_count = 1
	mode = a[0]	
	for (i = 0; i < a.length; i++)
		counter = 1
		if a[i] == a[i+1]
			counter++
		if counter > mode_count
			mode_count = counter
			mode = a[i] 
bubble_sort()
swap()

		
