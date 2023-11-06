#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int number[5];
	int odd[5];
	int even[5];
	int i, j;
	int k = 0;
	int l = 0;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
		if (number[i] % 2 == 0) {
			even[k] = number[i];
			k++;
		}
		else {
			odd[l] = number[i];
			l++;
		}
	}
	printf("Odd numbers: ");
	for (i = 0; i < l; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < k; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}