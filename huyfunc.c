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
	printf("3. Add new elelement\n");
	printf("4. Delete element by ID\n");
	printf("5. Search by ID\n");
	printf("6. Search by name\n");
	printf("7. Calculate total cost\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}