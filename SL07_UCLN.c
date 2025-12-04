#include <stdio.h>

int main(){
	printf("Input:\n");
	int a,b;
	scanf("%d %d", &a, &b);
	printf("\nOutput:\n");
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;	
	}
	printf("%d", a);
	return 0;
}
