#include <stdlib.h>
#include <stdio.h>

void main() {
	int annee = 0;
	printf("veuillez saisir une annee : \n");
	scanf_s("%d", &annee);
	if (((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400 == 0)) {
		printf("l'annee %d est bisextile", annee);
	}
	else {
		printf("l'annee %d n'est pas bisextile", annee);
	}

}