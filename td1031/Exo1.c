#include <stdlib.h>
#include <stdio.h>

void main() {
	int A;
	int B;
	int C;
	int temp = 0;
	printf("veuillez entrer une valeur A :");
	scanf_s("%d", &A);
	printf("veuillez entrer une valeur B :");
	scanf_s("%d", &B);
	printf("veuillez entrer une valeur C :");
	scanf_s("%d", &C);
	if (A > C) {
		temp = A;
		A = C;
		C = temp;
		temp = 0;
	}
	if (B > C) {
		temp = B;
		B = C;
		C = temp;
		temp;
	}
	if (A > B) {
		temp = A;
		A = B;
		B = temp;
		temp = 0;
	}
	printf("nous avons donc dans l'ordre croissant ; A = %d, B = %d et C = %d", A, B, C);
}