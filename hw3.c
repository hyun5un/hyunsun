#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 5 - 1; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}