#include <stdio.h>

int main() {
	int n;
	printf("Input your medal: (1-4) ");
	scanf("%d", &n);
	switch (n) {
		case 1:
			printf("You get first price medal: 1000000");
			break;
		case 2:
			printf("You get second price medal: 500000");
			break;
		case 3:
			printf("You get third price medal: 100000");
			break;
		case 4:
			printf("You get fourth price medal: 10000");
			break;
		default:
			printf("Goodluck to you next times");
	}
	return 0;
}
