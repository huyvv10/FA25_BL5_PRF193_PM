#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
int main(){
	printf("===INPUT===\n");
//	char s[]="6,9,8,5,1,2,4,7,3,5,4,8";
	char s[MAX];
	int n=0, arr[MAX];
	fgets(s,sizeof(s),stdin);		//Read data from the keyboard
//	printf("%s", s);
	printf("\n===OUTPUT===:\n");
	char *token=strtok(s,",");
	int sum=0, tk;
	while (token!=NULL){
		tk=atoi(token);
		arr[n++]=tk;
		sum+=tk;
		token=strtok(NULL,",");
	}
	printf("\n");
	display(arr,n);
	printf("\n%d", sum);
	return 0;
}
