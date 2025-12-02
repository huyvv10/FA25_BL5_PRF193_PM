#include <stdio.h>

int main(){
	int n;
	char vC;
	float vF;
	double vD;
	
	printf("Input an integer number: n = "); scanf("%d", &n);
	printf("Your inputed number: n = %d", n);
//	getchar();		//Clear buffer
	fflush(stdin);	//Clear buffer powerfull
	printf("\nInput a character: c = "); scanf("%c", &vC);
	printf("Your inputed character: c = %c", vC);	
	
	printf("\nInput a float number: f = "); scanf("%f", &vF);
	printf("Your float number: f = %f", vF);		
	printf("\nYour float number: f = %.1f", vF);		
	printf("\nInput a double number: db = "); scanf("%lf", &vD);
	printf("Your double number: db = %lf", vD);		
	printf("\nYour double number: f = %.2lf", vD);	
	return 0;
}
