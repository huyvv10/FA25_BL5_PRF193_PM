#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct{
	int id;
	char name[31];
	float grade;
} Student;

void display(Student s){
	printf("%-5d %-25s %5.1f\n", s.id, s.name, s.grade);
}

void inputArrOfStruct(Student s[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("Student id of std %d", i+1); scanf("%d", &s[i].id); fflush(stdin);
		printf("Student name of std %d", i+1); scanf("%[^\n]", s[i].name);
		printf("Student grade of std %d", i+1); scanf("%f", &s[i].grade);
		fflush(stdin);
	}
}

void displayAllStd(Student s[], int n){
	int i;
	printf("%-5s %-25s %5s\n", "ID", "NAME", "GRADE");
	printf("%-5s %-25s %5s\n", "--", "----", "-----");
	for (i=0; i<n; i++)
		display(s[i]);
}
//Sort the student list by grade in descending order.
void sortListByGradeDesc(Student s[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (s[j-1].grade<s[j].grade){
				Student tg;
				tg=s[j]; s[j]=s[j-1]; s[j-1]=tg;
			}
}
int main(){
	printf("===INPUT===\n");
	int n;
	scanf("%d", &n);
	Student arrStd[n];
	inputArrOfStruct(arrStd,n);
	printf("\n===OUTPUT===:\n");
	displayAllStd(arrStd,n);
	printf("\n");
	sortListByGradeDesc(arrStd,n);
	displayAllStd(arrStd,n);
	return 0;
}
