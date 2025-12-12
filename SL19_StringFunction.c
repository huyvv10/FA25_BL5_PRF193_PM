#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
	char str[MAX], s[MAX];
	gets(str);
	printf("Length: %d\n", strlen(str));
	strcpy(s, str);
	printf("%s \t Length: %d", strupr(s), strlen(s));
	
	return 0;
}
