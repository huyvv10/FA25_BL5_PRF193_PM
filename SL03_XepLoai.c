#include <stdio.h>

int main(){
	float g;
	printf("Input your GPA: "); scanf("%f", &g);
	if (g<0 || g>10){
		printf("%.1f is not your GPA", g);
		exit(0);
	}
	if (g>=9) printf("Your GPA = %.1f, you're excellence.",g);
	else if (g>=8) printf("Your GPA = %.1f, you're good.",g);
	else if (g>=7) printf("Your GPA = %.1f, you're well.",g);
	else if (g>=5) printf("Your GPA = %.1f, you're fair.",g);
	else printf("Your GPA = %.1f, you're poor.",g);		
	return 0;
}
