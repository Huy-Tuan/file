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
	fptr = fopen("student.txt", "w");
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	getchar();
	struct Student student[n];
	for(int i = 0; i < n; i++){
		printf("Nhap ID sinh vien thu %d: ", i + 1);
		scanf("%d", &student[i].id);
		getchar();
		printf("Nhap ten sinh vien thu %d: ", i + 1);
		fgets(student[i].name, sizeof(student[i].name), stdin);
		student[i].name[strcspn(student[i].name, "\n")] = '\0';
		printf("Tuoi sinh vien thu %d: ", i + 1);
		scanf("%d", &student[i].age);
		getchar();
	}
	for(int i = 0; i < n; i++){
		/*fprintf("ID sinh vien thu %d la: \n",i + 1, student[i].id);
		fprintf("Ten sinh vien thu %d la: \n", i + 1, student[i].name);
		fprintf("Tuoi sinh vien thu %d la: \n", i + 1, student[i].age);*/
		fprintf(fptr, "ID: %d Name: %s Age: %d\n", student[i].id, student[i].name, student[i].age);
	}
	fclose(fptr);
	return 0;
}

