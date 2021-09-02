#include "main.h"

/**
 * void more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
*/
void more_numbers(void)
{
char i;
int counter;

for (counter = 1; counter <11; counter++)
{
for (i = 0; i < 15; i++)
    
{
if (i / 10 > 0)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
