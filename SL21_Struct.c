#include <stdio.h>
#include <string.h>

typedef struct{
	int id;
	char name[31];
	float grade;
} Student;

void display(Student s){
	printf("%-5d %-25s %5.1f\n", s.id, s.name, s.grade);
}
int main(){
	Student sv1;
	sv1.id=1;
	strcpy(sv1.name,"Vu Van Huy");
	sv1.grade=8.5;
	display(sv1);
	
	Student sv2={2,"Nguyen Viet Vinh", 7.5};
	Student sv3={4,"Tran Nguyen Bao Anh", 9};
	display(sv2);
	display(sv3);
	
	return 0;
}
