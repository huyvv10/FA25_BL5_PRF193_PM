#include <stdio.h>
#include <string.h>
#define MAX 50

void inputArr(char str[][MAX], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("str[%d] = ",i);
		fflush(stdin);
//		fgets(str[i], MAX, stdin);
		scanf("%[^\n]", str[i]);
	}
}
void displayArrStr(char str[][MAX], int n) {
	int i;
	for (i=0; i<n; i++)
		printf("%s\n",str[i]);
}

void sortArrStringAsc(char str[][MAX], int n) {
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(str[j],str[j-1])==-1) {
				char tg[MAX];
				strcpy(tg,str[j]);
				strcpy(str[j], str[j-1]);
				strcpy(str[j-1],tg);
			}
}
//Count the number of kws in the array
int countName(char str[][MAX], int n, char *kw) {
	int i, count=0;
	for (i=0; i<n; i++) {
		if (strcmp(str[i],kw)==0) count++;
	}
	return count;
}

//Display the elements in the array which containing kw
void searchTheExisting(char str[][MAX], int n, char kw[MAX]) {
	int i;
	for (i=0; i<n; i++) 
		if (strcmp(str[i],kw)==0) {
			printf("There is existing %s in the array", kw);
			return;
		}
	printf("Find not found %s in the array", kw);
}

//Display the elements in the array which containing kw
void searchAll(char str[][MAX], int n, char kw[MAX]) {

}
void menu();
int main() {
	printf("===INPUT===\n");
	int n,i,sel;
	char kw[MAX];
	scanf("%d", &n);
	fflush(stdin);
	char S[n][MAX];
	inputArr(S,n);
	printf("\n===OUTPUT===:\n");
	do {
		menu();
		scanf("%d", &sel);
		fflush(stdin);
		switch(sel) {
			case 1:
				displayArrStr(S,n);
				break;
			case 2:
				printf("\n Sorting \n");
				sortArrStringAsc(S,n);
				displayArrStr(S,n);
				break;
			case 3:
				printf("\n Count \n");
				fflush(stdin);			//Clear buffer
				printf("Input searching kw: ");
				scanf("%[^\n]", kw);
				fflush(stdin);			//Clear buffer
				int count = countName(S,n,kw);
				if (count!=0)
					printf("\nThe number of %s in the array is: %d", kw, count);
				else
					printf("\nFind not found %s in the array.", kw);
				break;
			case 4:
				printf("\nInput searching kw: ");
				scanf("%[^\n]", kw);
				fflush(stdin);			//Clear buffer
				searchTheExisting(S,n,kw);
				break;
			case 0:
				printf("Bye!\n");
				break;
			default:
				printf("Invalid selection. Please select again.\n");
		}
	} while (sel!=0);
	return 0;
}

void menu() {
	printf("\n------- Array of string -------\n");
	printf("1. Display the array.\n");
	printf("2. Sort the array.\n");
	printf("3. Count number of searching kws.\n");
	printf("4. Find the existing of searching kws.\n");
	printf("5. Search by name.\n");
	printf("0. Exit.\n");
	printf("Your selection: ");
}
