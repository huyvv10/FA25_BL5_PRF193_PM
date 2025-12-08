#include <stdio.h>
void menu();
void inputArray(int a[], int n);
void display(int a[], int n);

int main() {
	int sel,n;
	printf("Input number of element: "); scanf("%d", &n);
	int arr[n];
	inputArray(arr,n);
	do {
		menu();
		scanf("%d", &sel);
		fflush(stdin);		//Clear buffer
		switch(sel) {
			case 1:
				display(arr,n);
				break;
			case 2:
				printf("Feature 2 is running");
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 0:
				printf("Bye bye.\n");
				break;
			default:
				printf("Invalid selection. Please select again from 1->10\n");
		}
	} while (sel!=0);
	return 0;
}
void inputArray(int a[], int n){
	int i; 
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}

void menu() {
	printf("\n=====ABC management ======\n");
	printf("1. Display all\n");
	printf("2. Edit by ID\n");
	printf("3. Add new elelement\n");
	printf("4. Delete element by ID\n");
	printf("5. Search by ID\n");
	printf("6. Search by name\n");
	printf("7. Calculate total cost\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}