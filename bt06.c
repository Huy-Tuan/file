#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *scfile, *newfile;
	char cp;
	scfile = fopen("bt01.txt", "r");
	
	newfile = fopen("bt06.txt", "w");
	
	while ((cp = fgetc(scfile)) != EOF) {
		fputc(cp, newfile);
 }
 	fclose(scfile);
 	fclose(newfile);
	return 0;
}

