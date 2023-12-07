#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define num 3
struct city {
	char name[50];
	char country[50];
	int population;
};
int main() {
	int i;
	struct city info[num];
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf(" %[^\n]s", info[i].name);
		printf("Country> ");
		scanf(" %[^\n]s", info[i].country);
		printf("Poputlation> ");
		scanf("%d", &info[i].population);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, info[i].name, info[i].country, info[i].population);
	}
	return 0;
}