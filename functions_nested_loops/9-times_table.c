#include "main.h"
/**
* times table - 9 times table
*
* Return: the 9 table
*/

void times_table(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int result = i * j;

            _putchar(result / 10 + '0');
            _putchar(result % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
        putchar('\n');
    }
}
