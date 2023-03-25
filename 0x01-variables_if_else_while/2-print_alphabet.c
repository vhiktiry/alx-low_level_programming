#include <stdoi.h>
/**
 * main -  A program that prints alpahbets in lowercse
 * Return: always 0
*/
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
