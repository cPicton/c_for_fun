#include "main.h"

/**
* print_most_numbers - print 0 to 20, skip 9 and 18
*/

void print_most_numbers(void)
{
char x;
for (x = '0'; x <= '20';x++)

{
if (x != '9' && x != '18')

_putchar(x);

}
_putchar('\n')
}
