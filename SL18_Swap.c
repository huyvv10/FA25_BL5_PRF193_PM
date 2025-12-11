#include <stdio.h>

void swap(int x, int y){
	printf("\nTrong ham swap, truoc khi swap: x = %d, y = %d", x, y);
	int tg = x; x = y; y = tg;
	printf("\nTrong ham swap, sau khi swap: x = %d, y = %d", x, y);
}
void swap2(int *x, int *y){
	printf("\nTrong ham swap, truoc khi swap: x = %d, y = %d", *x, *y);
	int tg = *x; *x = *y; *y = tg;
	printf("\nTrong ham swap, sau khi swap: x = %d, y = %d", *x, *y);
}
int main(){
	int x = 6, y = 8;
	printf("Trong ham main, truoc khi swap: x = %d, y = %d", x, y);	
	swap(x, y);
	printf("\nTrong ham main, sau khi swap: x = %d, y = %d", x, y);	
	printf("\n");
	swap2(&x, &y);		//Call pointer module
	printf("\nTrong ham main, sau khi swap: x = %d, y = %d", x, y);		
	return 0;
}
