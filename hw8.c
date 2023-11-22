#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double StandardDeviation(double number[], int size) {
	double sum1 = 0.0;
	double sum2 = 0.0;
	double mo;
	for (int i = 0; i < size; i++) {
		sum1 += number[i];
	}
	mo = sum1 / size;
	for (int i = 0; i < size; i++) {
		sum2 += pow(number[i] - mo, 2);
	}
	sum2 = sqrt(sum2 / size);
	return sum2;
}
int main(void) {
	double number[5];
	int i;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++) {
		scanf("%lf", &number[i]);
	}
	double result = StandardDeviation(number, 5);
	printf("Standard Deviation = %.3lf", result);
	return 0;
}
