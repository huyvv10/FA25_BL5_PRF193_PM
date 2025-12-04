#include <stdio.h>

int main(){
	printf("Input:\n");
	int i=1,n,S=0;
	scanf("%d", &n);
	if (n<0) n=-n;
	printf("\nOutput:\n");
	while (i<n){
		printf("%d + ", i);
		S+=i;
		i++;
	}
	printf("%d = %d\n", n, S+n);
	
	i=1; S=0;	//Reset value
	while (i<n){
		if (i%2==1){
			printf("%d + ", i);
			S+=i;			
		}
		i+=2;
	}
	if (n%2==1)
		printf("%d = %d\n", n, S+n);	
	else
		printf("\b\b = %d\n", S);	
		
	i=2; S=0;	//Reset value
	while (i<n){
		if (i%2==0){
			printf("%d + ", i);
			S+=i;			
		}
		i+=2;
	}
	if (n%2==0)
		printf("%d = %d\n", n, S+n);	
	else
		printf("\b\b = %d\n", S);			
	return 0;
}
