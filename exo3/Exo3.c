#include <stdlib.h>
#include <stdio.h>

void main() {
	int chiffre = 0; 
	float impot;
	printf("veuillez rentrer votre revenu net global :");
	scanf_s("%d", &chiffre); 
	if (chiffre <= 10064) {
		printf("le taux d'impot pour ce niveau de revenu est nul");
	}
	if (chiffre > 10064 && chiffre <= 25659) {
		impot = chiffre * (11.0 / 100.0); 
		printf("votre taux d'impot brut s'eleve a %f euros", impot);
	}
	if (chiffre > 25660 && chiffre <= 73369) {
		impot = chiffre * (30.0 / 100.0);
		printf("votre taux d'impot brut s'eleve a %f euros", impot);
	}
	if (chiffre > 73370 && chiffre <= 157806) {
		impot = chiffre * (41.0 / 100.0);
		printf("votre taux d'impot brut s'eleve a %f euros", impot);
	}
	if (chiffre > 157807) {
		impot = chiffre * (45.0 / 100.0);
		printf("votre taux d'impot brut s'eleve a %f euros", impot);
	}


}