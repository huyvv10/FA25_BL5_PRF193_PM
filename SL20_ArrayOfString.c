#include <stdio.h>
#include <string.h>
#define MAX 50

void inputArr(char str[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
		printf("str[%d] = ",i); fflush(stdin);
//		fgets(str[i], MAX, stdin);
		scanf("%[^\n]", str[i]);
	}
}
void displayArrStr(char str[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%s\n",strupr(str[i]));
}

void sortArrStringAsc(char str[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(str[j],str[j-1])==-1){
				char tg[MAX];
				strcpy(tg,str[j]); strcpy(str[j], str[j-1]); strcpy(str[j-1],tg);
			}
}
//Display the elements in the array which containing kw
void search(char str[][MAX], int n, char kw[MAX]){
	
}
int main(){
	printf("===INPUT===\n");
	int n,i;
	scanf("%d", &n); fflush(stdin);
	char S[n][MAX];
	inputArr(S,n);
	printf("\n===OUTPUT===:\n");
	displayArrStr(S,n);
	sortArrStringAsc(S,n);
	printf("\n Sorting \n");
	displayArrStr(S,n);
	return 0;
}
