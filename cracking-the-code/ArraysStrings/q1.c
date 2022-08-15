/*
Implement algo to det if string has all unique char.
What if no additional data structures.

i = 0
for (j = i+1; j < string.length ; j++)
	ch = string[i]
	if (ch == string[j]
		return not unique
	else
		i++
	if i == string.length
		return unique
*/

#include <stdio.h>
#include <stdlib.h>


int unique_check(char s[], int size) {
	int i = 0;
	int j = 0;
	for(j = i+1; j < size; j++) {
		char c = s[i];
		if (c == string[j])
			fprintf(stdout, "String not unique");
			return 0;	 
		else
			i++;
		if (i == size)
			fprintf(stdout, "String is unique");
			return 1;
	}
}



int main(void) {
	
	char s[] = "hello";
	char s2[] = "joshua";
	
	unique_checker(s, sizeof(s)/sizeof(s[]));
	unique_checker(s2, sizeof(s2)/sizeof(s2[]));

	return EXIT_SUCCESS;
}
		
