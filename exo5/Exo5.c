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
	delta = (b ^ 2) - (4 * a * c);
	if (delta > 0) {
		x1 = ((-b) - sqrt(delta)) / (2 * a);
		x2 = ((-b) + sqrt(delta)) / (2 * a);
		printf("la fonction � un delta positif,\n elle poss�de donc deux racines dans l'ensemble des r�els � savoir %f et %f", x1, x2);
	}
	if (delta = 0) {
		x1 = (-b) / (2 * a);
		printf("la fonction � un delta nul,\n elle poss�de donc une racine dans l'ensemble des r�els � savoir %f", x1);
	}
	if (delta < 0) {
		printf("la fonction � un delta n�gatif \n elle ne poss�de donc pas de racines dans l'ensemble des r�els");
	}
}
// le programme ne renvoie rien sur visual studio preview 2022, je ne comprends pas pourquoi parce que je n'y trouve aucune erreur 