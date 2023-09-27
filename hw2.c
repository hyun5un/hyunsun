#include <stdio.h>
int main(void) {
	double dis, mile;
	printf("Please enter kilometers: ");
	scanf("%lf", &dis);
	mile = dis / 1.609;
	printf("%.1lf km is equal to %.1lf miles.", dis, mile);
	return 0;
}