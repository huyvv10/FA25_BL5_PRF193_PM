#include <stdio.h>
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

void sortBubbleDesc(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1]<a[j]){
				int tg=a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}
void intput(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

int main(){
	printf("=== INPUT ===\n");
	int i,n;
	scanf("%d", &n);
	int arr[n];
	intput(arr,n);
	printf("\n=== OUTPUT ===\n");
	sortBubbleDesc(arr,n);
	for (i=0; i<n; i++)
		if (isPrime(arr[i])==1)
			printf("%d ", arr[i]);
	return 0;
}
