#include <stdio.h>
#define MAX 100
int main(){
	char str[MAX];
//	printf("Input a tring: "); scanf("%[^\n]", &str);
//	printf("Input a tring: "); scanf("%[acbd]", &str);
//	printf("Input a tring: "); scanf("%[^afcbd]", &str);
//	printf("\nInput a tring: "); scanf("%[0-9]", &str);
	printf("\nInput a tring: "); 
//		scanf("%[0-9A-Za-z@.]", &str);
	gets(str);
	printf("\n%s", str);
	return 0;
}
