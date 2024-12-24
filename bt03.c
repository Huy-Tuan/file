#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *fptr;
	fptr = fopen("bt01.txt", "a");
	char x[50];
	fgets(x, 50, stdin);
	x[strlen(x) - 1] = '\0';
	fprintf(fptr, "%s", x);
	fclose(fptr);
	return 0;	
}
