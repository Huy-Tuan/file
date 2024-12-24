#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	char x[50];
	fgets(x, 50, stdin);
	fprintf(fptr, "%s", x);
	fclose(fptr);
	return 0;
}

