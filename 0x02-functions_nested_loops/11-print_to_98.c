#include "main.h"

/**
 * print_to_98 - variable
 */

void print_to_98(int n)
{
		int num;

	if (n > 98)
		for (num = n; num > 98; num++)
			printf("%d, ", num);
	else
		for (num = n; num < 98; num++)
			printf("%d, ", num);
	printf("98\n");
}
