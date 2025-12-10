#include <stdio.h>

void intput(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
}
int findMax(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	return max;	
}

int findPosMaxTheK(int a[], int n, int k){
	int i, count=0, pos=-1, max;
	max = findMax(a,n);
	if (k<=0 || k>n) return pos;
	for (i=0; i<n; i++)
		if (a[i]==max){
			count++;
			if (count==k){
				pos=i; break;
			}
		}
	return pos;	
}

int findMin(int a[], int n){
	int i, min;
	min=a[0];
	for (i=1; i<n; i++)
		if (a[i]<min) min=a[i];
	return min;	
}

int findPosMinTheK(int a[], int n, int k){
	int i, count=0, pos=-1, max;
	max = findMin(a,n);
	if (k<=0 || k>n) return pos;
	for (i=0; i<n; i++)
		if (a[i]==max){
			count++;
			if (count==k){
				pos=i; break;
			}
		}
	return pos;		
}
//Bubble sort ASC
void sortAscInRange(int a[], int n, int pos1, int pos2){
	int i,j;
	for (i=pos1; i<pos2; i++)
		for (j=pos2; j>i; j--)
			if (a[j-1]>a[j]){
				int tg=a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}

void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
int main(){
	printf("Input:\n");
	int i,n,k;
	scanf("%d %d", &n, &k);
	int arr[n];
	intput(arr,n);
	printf("\nOutput:\n");
	int pos;
	pos=findPosMaxTheK(arr,n,k);
	if (pos!=-1)
		printf("The position the-%dth of maximum value is %d", k, pos);
	else
		printf("Find not found the position the-%dth of maximum value", k);	
	pos=findPosMinTheK(arr,n,k);
	if (pos!=-1)
		printf("\nThe position the-%dth of maximum value is %d", k, pos);
	else
		printf("\nFind not found the position the-%dth of maximum value", k);
	printf("\nSort in range\n");
	int k1, k2, pos1, pos2;
	printf("Input the-k maximum: "); scanf("%d", &k1);			
	printf("Input the-k minimum: "); scanf("%d", &k2);
	pos1=findPosMaxTheK(arr,n,k1);			
	pos2=findPosMinTheK(arr,n,k2);
	if (pos1>pos2){
		int tg=pos1; pos1=pos2; pos2=tg;
	}
	sortAscInRange(arr,n,pos1,pos2);
	display(arr,n);			
	return 0;
}
