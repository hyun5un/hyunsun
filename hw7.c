#include <stdio.h>
int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int i;
	int temp;
	int* fptr = arr1;
	int* sptr = arr2;
	printf("arr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	for (i = 0; i < 6; i++) {
		temp = *(fptr + i);
		*(fptr + i) = *(sptr + i);
		*(sptr + i) = temp;
	}
	printf("\n\nafter swap");
	printf("\narr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
}