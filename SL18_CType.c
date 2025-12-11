#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char name[]="vU VAn hUY 2025.";
	int i,n;
	n=strlen(name);		//measure the length of string name
	printf("%s", name);
	int sc=0, ch=0, num=0, iH=0, iT=0, sp=0;
	for (i=0; i<n; i++){
		if (isalnum(name[i])) sc+=1;
		if (isalpha(name[i])) ch+=1;
		if (isdigit(name[i])) num+=1;
		if (isupper(name[i])) iH+=1;
		if (islower(name[i])) iT+=1;
		if (isspace(name[i])) sp+=1;
	}
	printf("\nTong so ky tu: %d", n);
	printf("\nSo ky tu la so va chu: %d", sc);
	printf("\nSo ky tu la so: %d", num);
	printf("\nSo ky tu la chu: %d", ch);
	printf("\nSo ky tu la chu in HOA: %d", iH);
	printf("\nSo ky tu la chu in thuong: %d", iT);
	printf("\nSo ky tu la space: %d", sp);
	

	return 0;
}
