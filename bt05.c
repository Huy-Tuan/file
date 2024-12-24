#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	FILE *fptr;
	int n;
	fptr = fopen("bt05.txt", "w");
	char word[1000];
	printf("Hay so dong muon viet: ");
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++) {
		printf("Nhap noi dung dong thu %d", i + 1);
		fgets(word, 1000, stdin);
//		word[strcspn(word, "\n")] = '\0';
		fputs(word, fptr);
	}
	fclose(fptr);
	
	fptr = fopen("bt05.txt", "r");
	printf("Noi dung trong file bt05 la: \n");
	while(fgets(word, 1000, fptr)){
		printf("%s", word);
	}
	
	fclose(fptr);
	return 0;
}

