#include <stdio.h>

int main(){
	int n = 5;
	int *pI; // = &n;
	pI = &n;
	printf("Gia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den pI => %x", pI);
	printf("\nDia chi cua con tro pI: %x", &pI);
	*pI = 10;
	printf("\n\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den pI => %x", pI);
	printf("\nDia chi cua con tro pI: %x", &pI);	
	int m = 15;
	pI = &m;
	printf("\n\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den pI => %x", pI);
	printf("\nDia chi cua con tro pI: %x", &pI);
	return 0;
}
