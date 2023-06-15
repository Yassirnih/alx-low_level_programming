#include <stdio.h>

/**
 * main - the main function
 *
 * task - prints "Programming is like building a multilingual puzzle"
 *
 * Return: return value is 0 which means always succesful
 */

int main(void)
{
	printf("Size of char is=%i byte(s)\n",sizeof(char));
	printf("Size of unsigned char is=%i byte(s)\n",sizeof(unsigned char));
	printf("Size of short is=%i byte(s)\n",sizeof(short));
	printf("Size of unsigned short is=%i byte(s)\n",sizeof(unsigned short));
	printf("Size of int is=%i byte(s)\n",sizeof(int));
	printf("Size of unsigned int is=%i byte(s)\n",sizeof(unsigned int));
	printf("Size of long is=%i byte(s)\n",sizeof(long));
	printf("Size of unsigned long is=%i byte(s)\n",sizeof(unsigned long));

	return (0);
}
