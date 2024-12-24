#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *fptr;
	fptr = fopen("bt01.txt", "r");
	char x[50];
	fgets(x, 50, fptr);
	printf("%s", x);
	
	fclose(fptr);
	return 0;
}
