#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	const char *ptr = format;
	va_list args;

	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					const char *s = va_arg(args, char *);

					if (s)
						printf("%s", s);
					else
						printf("(nil)");
					break;
				}
			case ' ':
			case ',':
				printf(", ");
				break;
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
