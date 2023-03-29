#include "main.h"

/**
 * print_all - function prints anything
 * Description: function takes a format str which specifies the type
 * of the argument to be printed
 *
 * @format: string format to be printed
 * @args: va_list, arguments passed from printf
 * @_bytes: int pointer to the number of bytes written to stdout
 */
void print_all(const char *format, va_list args, unsigned int *_bytes)
{
	unsigned int i, specifier;

	if (format && !args)
	{
		puts(format);
		return;
	}

	i = 0;
	while (format && format[i] != '\0')
	{
		if (_is_fspec(format[i]) && format[i + 1])
		{
			specifier = get_specifier(format[i + 1]);
			if (specifier)
			{
				/**
				 * check if the specifier following the %
				 * is valid, then call the correct function
				 * associated with the type defined by specifier
				 */
				++i;
				switch (specifier)
				{
				case CHAR:{
					_putchar(va_arg(args, int));
					break;
				}
				case INT:{
					print_number(va_arg(args, int));
					break;
				}
				case DECIMAL:{
					print_number(va_arg(args, int));
					break;
				}
				case STRING:{
					print_string(va_arg(args, char *s));
					break;
				}
				}
				i++; /* increment again and continue */
				continue;

			}

		}
		/**
		 * can print char at this point, means format[i+1]
		 * not a valid specifier, therefore if(specifier) is skipped
		 */
		_putchar(va_arg(args, int));
		++*_bytes;
		i++;
	}

}

/**
 * get_specifier - translates the format specifier
 * Description: takes a char and checks if it is a valid format specifier
 *
 * @c: char, argument to check if it is a specifier
 *
 * Return: int, int representing a valid specifier or 0
 */
unsigned int get_specifier(char c)
{
	unsigned int i;
	format_spec spec[] = {
		{'c', CHAR},
		{'i', INT},
		{'d', DECIMAL},
		{'s', STRING},
		{0, NON_TYPE}
	};

	i = 0;

	while (spec[i].specifier != 0 && i < 4)
	{
		if (c - spec[i].specifier == 0)
			return (spec[i]._type);
		i++;
	}

	return (spec[i]._type);
}
