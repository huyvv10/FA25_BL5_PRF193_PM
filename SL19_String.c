#include <stdio.h>
#include <ctype.h>

int main(){
	char name[] = "I am an FPT student";
	int i=0;
	while (name[i]!='\0'){
		printf("%c", toupper(name[i]));
		i++;
	}
	printf("\n");
	printf("%25s\n", name);
	printf("%-25s\n", name);
	puts(name);
	printf("\n");
	printf("%-5s %-25s %10s %5s\n", "STT", "Ho va Ten", "Ngay sinh", "Diem");	
	printf("%-5s %-25s %10s %5s\n", "---", "---------", "---------", "----");	
	printf("%-5s %-25s %10s %5s\n", "A01", "Vu Van Huy", "10/10/2000", "8.5");	
	printf("%-5s %-25s %10s %5s\n", "A02", "Tran Hung Cuong", "10/10/2000", "4.5");	
	printf("%-5s %-25s %10s %5s\n", "A03", "Nguyen Bao Anh", "10/10/2000", "9.5");	
	return 0;
}
