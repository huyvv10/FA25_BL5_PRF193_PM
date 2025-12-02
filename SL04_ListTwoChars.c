#include <stdio.h>
//Display the ASCII table
int main(){
	char c, c1, c2;
	printf("Input two characters: "); scanf("%c %c", &c1, &c2);
	if(c1>c2){
		char tg;
		tg=c1; c1=c2; c2=tg;
	}
	printf("%s \t %s \t %s \t %s\n","N0", "Char", "Oct", "Hex");
	printf("%s \t %s \t %s \t %s\n","--", "----", "---", "---");
	for (c=c1; c<=c2;c++){
		printf("%d \t %c \t %o \t %x\n",c,c,c,c);
	}
	return 0;
}
