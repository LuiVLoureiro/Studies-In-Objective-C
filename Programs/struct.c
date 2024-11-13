#include <stdio.h>

struct st_student{
	char enrollment[10];
	char name[100];
	char course[50];
	int age;
}student[3];

// I'ts possible to create a struct to assimilate a another structure
// struct st_groupOfStructers{
// 	struct st_student students[100];
// };

int main(){
	setbuf(stdout, NULL);

	//struct st_student student;

	for(int i = 0; i < 3; i++){
		printf("Inform your Enrollment -> ");
		fgets(student[i].enrollment, 10, stdin);
		printf("Inform your Name -> ");
		fgets(student[i].name, 100, stdin);
		printf("Inform your Course -> ");
		fgets(student[i].course, 50, stdin);
		printf("Inform your Age -> ");
		scanf("%d", &student[i].age);
		getchar();
	}

	for(int i = 0; i < 3; i++){
		printf("================ Student Number [%d] Data ================\n", i);
		printf("Student Enrollment is %s\n", strtok(student[i].enrollment, "\n"));
		printf("Student Name is %s\n", strtok(student[i].name, "\n"));
		printf("Student Course is %s\n", strtok(student[i].course, "\n"));
		printf("Student Age is %d\n\n", student[i].age);

	}

	return 0;
}
