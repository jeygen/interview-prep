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
#include <string.h>


void unique_check(char s[], int size) {
	if (size == 1)
		fprintf(stdout, "\nString is unique\n");
	
	int i = 0;
	int j = 0;
	for(j = i+1; j < size; j++) {
		char c = s[i];
		if (c == s[j]) 
			fprintf(stdout, "\nString not unique\n");
		else
			i++;
		if (i == (size-1))
			fprintf(stdout, "\nString is unique\n");
	}
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Incorrect num of args");
		return EXIT_FAILURE; 
	}

	unique_check(argv[1], strlen(argv[1]));
	
	//char s[] = "hello";
	//char s2[] = "joshua";
	
	//unique_check(s, strlen(s));
	//unique_check(s2, strlen(s2));

	return EXIT_SUCCESS;
}
		
