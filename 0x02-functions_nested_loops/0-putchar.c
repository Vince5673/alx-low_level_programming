#include "main.h"
/**
 *main - entry point
 *
 *Description: prints _putchar followed by a newline
 *
 *Return: returns 0(successful)
 *
 */
int main(void)
{
	char _putcharText[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(_putcharText[i]);
	}
	_putchar('\n');
	return (0);
}
