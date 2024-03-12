#include <stdio.h>

void asalMiKotu(int n)
{
	if (n < 2) {
		printf("Asal degil\n");
	} else if (n == 2) {
		printf("Asal\n");
	} else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("Asal Degil\n");
				return;
			}
		}
		printf("Asal\n");
	}
}

void asalMi(int n)
{
	if (n < 2) {
		printf("Asal degil\n");
	} else if (n <= 3) {
		printf("Asal\n");
	} else {
		if (n % 2 == 0) {
			printf("Asal degil\n");
			return;
		}
		for (int i = 3; i < n / 2 + 1; i += 2) {
			if (n % i == 0) {
				printf("Asal degil\n");
				return;
			}
		}
		printf("Asal\n");
	}
}

int main ()
{
	// 563, 587, 599, 617, 709, 739, 773
	asalMi(2);
	asalMi(563);
	asalMi(8);
	asalMi(12);

	return 0;
}
