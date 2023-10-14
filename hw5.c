#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Binary(n) {
	if (n > 0) {
		Binary(n / 2);
		printf("%d", n % 2);
	}
}
int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num < 0)
		printf("It is not a positive integer.");
	else
		Binary(num);
	return 0;
}