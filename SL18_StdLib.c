#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int i,n;
	scanf("%d", &n);
	for (i=0; i<abs(n); i++)
		printf("%d ", i);
	printf("\n");
	for (i=0; i<abs(n); i++)
		printf("So thu %d: %d\n", i+1, rand());		

	srand(time(NULL));		//Soft random
	printf("\n");
	for (i=0; i<abs(n); i++)
		printf("So thu %d: %d\n", i+1, rand());			
	return 0;
}
