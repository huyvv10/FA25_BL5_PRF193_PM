#include <stdio.h>
#include "huyfunc.c"

//void menu();
//void inputArray(int a[], int n);
//void display(int a[], int n);
//void editArray(int a[], int n, int x);
int main() {
	int sel,n,kw,pos;
	n=10;
	int arr[]={5,6,7,4,2,6,4,9,3,8};
//	printf("Input number of element: "); 
//	scanf("%d", &n);
//	int arr[n];
//	inputArray(arr,n);
	do {
		menu();
		scanf("%d", &sel);
		fflush(stdin);		//Clear buffer
		switch(sel) {
			case 1:
				display(arr,n);
				break;
			case 2:				
				printf("Input a searching number: "); scanf("%d", &kw);
				pos = findPosFromLeft(arr,n,kw);
				if (pos!=-1)
					printf("The position first found of %d is %d\n", kw, pos);
				else
					printf("Find not found %d in the array\n", kw);	
				break;
			case 3:
				printf("Input a searching number: "); scanf("%d", &kw);
				pos = findPosFromRight(arr,n,kw);
				if (pos!=-1)
					printf("The position first found of %d is %d\n", kw, pos);
				else
					printf("Find not found %d in the array\n", kw);	
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
