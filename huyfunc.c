//Count the frequency of the searching keyword in the array
int countTheAppearance(int a[], int n, int x){
	int i, count=0;
	for (i=0; i<n; i++)
		if (a[i]==x) count++;
	return count;	
}

//Sort the array in ascending order using bubble sort
void sortAscBubbleSort(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1]>a[j]){		//Swap ASC to DESC by changing > to < 
				int tg=a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}
//Sort the array in descending order using bubble sort
void sortDescBubbleSort(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1]<a[j]){		//Swap ASC to DESC by changing > to < 
				int tg=a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}
//Sort the array in ascending order using selection sort
void sortAscSelection(int a[], int n){
	int i,j,minIndex;
	for (i=0; i<n-1; i++){
		minIndex=i;
		for (j=i+1; j<n; j++)
			if (a[minIndex]>a[j]) minIndex=j;
		if (minIndex!=i){
			int tg = a[minIndex]; a[minIndex]=a[i]; a[i]=tg;
		}	
	}
}

//Sort the array in descending order using selection sort
void sortDescSelection(int a[], int n){
	int i,j,minIndex;
	for (i=0; i<n-1; i++){
		minIndex=i;
		for (j=i+1; j<n; j++)
			if (a[minIndex]<a[j]) minIndex=j;		//Swap > to < 
		if (minIndex!=i){
			int tg = a[minIndex]; a[minIndex]=a[i]; a[i]=tg;
		}	
	}
}

//Find the position first found of x from the left.
//Return -1 in case find not found.
int findPosFromLeft(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos=i; break;			
		}
	return pos;	
}

//Find the position first found of x from the right.
//Return -1 in case find not found.
int findPosFromRight(int a[], int n, int x){
	int i, pos=-1;
	for (i=n-1; i>=0; i--)
		if (a[i]==x){
			pos=i; break;			
		}
	return pos;	
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
	printf("1. Display array\n");
	printf("2. Find position of searching number from the left\n");
	printf("3. Find position of searching number from the right\n");
	printf("4. Sort Asc (selection sort)\n");
	printf("5. Sort Desc (selection sort)\n");
	printf("6. Sort Asc (bubble sort)\n");
	printf("7. Sort Desc (bubble sort)\n");
	printf("8. Count a searching number\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}