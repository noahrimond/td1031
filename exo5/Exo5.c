#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {
	int a;
	int b;
	int c;
	int delta = 0;
	float x1;
	float x2;
	printf("veuillez entrer une valeur a :");
	scanf_s("%d", &a);
	printf("veuillez entrer une valeur b :");
	scanf_s("%d", &b);
	printf("veuillez entrer une valeur c :");
	scanf_s("%d", &c);
	delta = (b * b) - (4 * a * c);
	if (delta > 0) {
		x1 = ((-b) - sqrt(delta)) / (2 * a);
		x2 = ((-b) + sqrt(delta)) / (2 * a);
		printf("la fonction a un delta positif,\n elle possede donc deux racines dans l'ensemble des reels à savoir %f et %f", x1, x2);
	}
	if (delta == 0) {
		x1 = (-b) / (2 * a);
		printf("la fonction a un delta nul,\n elle possède donc une racine dans l'ensemble des réels à savoir %f", x1);
	}
	if (delta < 0) {
		printf("la fonction a un delta negatif \n elle ne possede donc pas de racines dans l'ensemble des reels");
	}
}