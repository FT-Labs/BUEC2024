#include <stdio.h>


int main (int argc, char *argv[])
{
	int a = 5;
	int b = 3;

	char c = '\n';
	char d = 10;

	// operatorler

	// == Esit ise dogru
	// != Esit degil ise dogru
	// <  Kucuk ise dogru
	// >  Buyuk ise dogru
	// <= kucukesit ise dogru
	// >= buyukesit ise dogru

	if (a == b) {
		printf("Birbirine esittir\n");
	} else {
		printf("Esit degildir\n");
	}

	if (a != b) {
		printf("Esit degildir\n");
	} else {
		printf("Birbirine esittir\n");
	}

	if (c == d) {
		printf("Birbirine esittir\n");
	} else {
		printf("Esit degildir\n");
	}

	return 0;
}
