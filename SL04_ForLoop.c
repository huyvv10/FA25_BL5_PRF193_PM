#include <stdio.h>

int main() {
	int i, n;
	printf("Input n = ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
		printf("%d ", i+1);
//	printf("\n");
//	for (i=n; i>0; i--)
//		printf("%d ", i);
//	printf("\nOdd list numbers:\n");
//	for (i=1; i<n; i+=2)
//		printf("%d ", i);
//	printf("\nEven list numbers:\n");
//	for (i=0; i<n; i+=2)
//		printf("%d ", i);
	return 0;
}
