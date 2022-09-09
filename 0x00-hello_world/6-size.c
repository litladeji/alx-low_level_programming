#include<stdio.h>

/**
 * main - Print the sizeof many var types
 *
 * Return: Always 0 (Success)
 */
int mainv(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of an long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of an float: %ld byte(s)\n", sizeof(f));
	return (0);
}










