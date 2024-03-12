#include <stdio.h>


int main ()
{
	for (int i = 0; i < 10; i++) {
		// %d integer demek
		printf("%d ", i);
	}
	puts("");

	// i = i + 2 (esittir) i += 2
	int cnt = 0;
	for (int i = 0; i < 50; i += 2) {
		cnt++;
	}
	printf("Kere calisti: %d\n", cnt);

	cnt = 0;
	for (int i = 1; i < 50; i *= 2) {
		cnt++;
	}
	printf("Kere calisti: %d\n", cnt);

	return 0;
}
