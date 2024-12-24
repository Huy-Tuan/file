#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *fptr;
	char first_char;
	fptr = fopen("bt01.txt", "r");
	
	first_char = fgetc(fptr);
	printf("Ki tu dau tien la '%c'", first_char);
	
	fclose(fptr);
	return 0;
}
