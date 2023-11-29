#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int convCase(char sen) {
	const int diff = 'a' - 'A';
	if (sen >= 'A' && sen <= 'Z')
		return sen + diff;
	else if (sen >= 'a' && sen <= 'z')
		return sen - diff;
}
int main(void) {
	char str[50];
	int i;
	printf("Input >>> ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; i < sizeof(str); i++) {
		str[i] = convCase(str[i]);
	}
	printf("Output >>> ");
	printf("%s", str);
}