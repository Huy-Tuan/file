#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	int id;
	char name[50];
	int age;
};

int main () {
	FILE *fptr;
	int count = 0;
	struct Student student[100];
	fptr = fopen ("student.txt", "r");
	char line[100];
	while (fgets(line, sizeof(line), fptr) != NULL) {
		if(sscanf(line, "ID: %d Name: %s  Age: %d", &student[count].id, student[count].name, &student[count].age) == 3){
			count++;
		if(count >=100){
			printf("Da day!\n");
			break;
		 }
	  }else {
	  	printf("Du lieu khong hop le trong dong: %s", line);
	  	return 0;
	  }
	}
	fclose(fptr);
	printf("Danh sach sinh vien trong file:\n");
    for (int i = 0; i < count; i++) {
        printf("ID=%d, Name=%s, Age=%d\n", student[i].id, student[i].name, student[i].age);
    }
	return 0;
}

