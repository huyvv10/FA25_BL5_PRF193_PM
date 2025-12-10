#include <stdio.h>
#define MAX 10
void intput2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ",i,j); scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ",a[i][j]);
		printf("\n");	
	}
}

void displayMainDiagonal(int a[MAX][MAX], int r, int c){
	int i,n;
	n = r>c ? c : r;
	for (i=0; i<n; i++)
		printf("%d ", a[i][i]);
}

void displaySubDiagonal(int a[MAX][MAX], int r, int c){
	int i,n,m;
	if (r>c){
		for (i=0; i<c; i++)
			printf("%d ", a[i][c-i-1]);	
	} else {
		for (i=0; i<r; i++)
			printf("%d ", a[i][c-i-1]);			
	}
}

void getMaxMinSumMainDiagonal(int a[][MAX], int r, int c){
	int i,n,max=a[0][0],min=a[0][0],S=0;
	n = r>c ? c : r;
	for (i=0; i<n; i++){
		if (a[i][i]>max) max=a[i][i];
		if (a[i][i]<min) min=a[i][i];
		S+=a[i][i];
	}
	printf("Main diagonal: %d %d %d", max, min, S);
}

void getMaxMinSumSubDiagonal(int a[][MAX], int r, int c){
	
}
int main(){
	printf("===INPUT===\n");
	int r,c;
	printf("Input number of rows: "); scanf("%d", &r);
	printf("Input number of columns: "); scanf("%d", &c);
	int m[MAX][MAX];
	intput2DArray(m,r,c);
	printf("\n===OUTPUT===:\n");
	display2DArray(m,r,c);
	printf("\n--- Main diagonal ---\n");
	displayMainDiagonal(m,r,c);
	printf("\n--- Sub diagonal ---\n");
	displaySubDiagonal(m,r,c);
	printf("\n--- Get Main diagonal info---\n");
	getMaxMinSumMainDiagonal(m,r,c);
	return 0;
}
