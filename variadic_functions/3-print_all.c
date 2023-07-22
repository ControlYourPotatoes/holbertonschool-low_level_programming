#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	char ch;
	int i;
	float f;
	char *s;
	const char *ptr = format;
	va_list args;

	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				printf("(nil)");
				break;
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
