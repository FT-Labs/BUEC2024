#include <stdio.h>


int main ()
{
	// tek karakter: char degiskeni
	// birden fazla karakter: string degiskeni

	char bou[] = "Bogazici";
	// bou[0] = 'b';
	// char bou[] = { 'B', 'o', 'g', 'a', 'z', 'i', 'c', 'i' };

	// string literal
	// read-only memory
	const char *boup = "Bogazici";
	// segfault alirsiniz, program calismaz
	// boup[0] = 'b';

	puts(bou);
	puts("======");
	puts(boup);

	return 0;
}
