#include <stdio.h>
//Display the ASCII table
int main(){
	int i, n;
	n=255;
	printf("%s \t %s \t %s \t %s\n","N0", "Char", "Oct", "Hex");
	printf("%s \t %s \t %s \t %s\n","--", "----", "---", "---");
	for (i=0; i<=n;i++){
		printf("%d \t %c \t %o \t %x\n",i,i,i,i);
		if (i%35==0) getchar();
	}
	return 0;
}
