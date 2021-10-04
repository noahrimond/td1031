#include <stdlib.h>
#include <stdio.h>

void main() {
	int annee;
	printf("veuillez entrer une annee");
	scanf_s("%d", &annee);
	if (((annee % 4 == 0) && (annee % 100 != 0)) || (annee % 400 == 0)) {
		printf("lannee %d est bisextile", annee);
	}
	else {
		printf("lannee %d nest pas bisextile", annee); 
	}
}