#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main() {
	int no[5];
	int min;
	int i;

	for (i = 0; i < 5; i++) {
		printf("\n Enter any no : ");
		scanf("%d", &no[i]);
	}

	min = no[0];

	for (i = 1; i < 5; i++) {
		if (no[i] < min)
			min = no[i];
	}

	printf("\n Min no is : %d", min);

	_getch();
	return 0;
}