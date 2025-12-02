#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Input a month: "); scanf("%d", &n);
	if (n<1 || n>12){
		printf("%d is not a month of the year.", n);
		exit(1);
	}
	if (n==1 || n==2 || n==3)
		printf("%d is in quater I.",n);	
	else if (n==4 || n==5 || n==6)
		printf("%d is in quater II.",n);	
	else if (n==7 || n==8 || n==9)
		printf("%d is in quater III.",n);	
	else 
		printf("%d is in quater IV.",n);				
	return 0;
}
