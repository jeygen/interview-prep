/*
reverse a string with a void reverse(char *c) {}

pseudo

find length of c[]
make temp array
fill temp array backwards
copy string to c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *c) {
	short int length = strlen(c);
	char *c2 = malloc(sizeof(length));
	int j = 0;
	int i = 0;
	for (i = length; i > 0; i--) {
		c2[j] = c[i-1];
		j++;
	}
	strcpy(c, c2);
	free(c2);
}	

int main(int argc, char *argv[]) {
	reverse(argv[1]);
	printf("%s\n", argv[1]);
	return 0;
}
