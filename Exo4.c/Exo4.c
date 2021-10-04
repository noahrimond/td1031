#include <stdlib.h>
#include <stdio.h>

void main() {
	int A;
	int B;
	int C;
	printf("veuillez entrer un cote AB:");
	scanf_s("%d", &A);
	printf("veuillez entrer un cote BC:");
	scanf_s("%d", &B);
	printf("veuillez entrer un cote CA:");
	scanf_s("%d", &C);
	if ((A + C >= B) && (B + C >= A) && (B + A >= C)) {
		printf("il existe un triangle ABC");
	}
	else {
		printf("il n'existe pas de triangle ABC");
	}
}