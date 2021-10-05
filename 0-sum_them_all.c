#include <stdarg.h>
#include <stdio.h>

/**
* Check for code
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned sum = 0, i;

va_list valist;

if (n == 0)
{
return (0);
}

va_start(valist, n);


for (i = 0; i < n; i++)

sum +=va_arg(valist, unsigned int);


va_end(valist);


return (sum);
}
