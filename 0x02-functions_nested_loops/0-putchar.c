#include "main.h"

/**
* main - entry point
* Description - prints "_putchar"
* Return: 0
**/
int main(void)
{
	char str[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
