#include <stdio.h>
//1 2 3 4 5
int main() {
	int i,n,S=0,S1=0,S2=0;
	printf("Input a month: ");	scanf("%d", &n);
	for (i=0; i<=n; i++){
		S+=i;	//S = S + i;
		if (i%2==0)
			S2+=i;
		else
			S1+=i;	
	}
	printf("S = %d\nS1 = %d\nS2 = %d", S, S1, S2);
	
	return 0;
}
