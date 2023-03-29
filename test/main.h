#ifndef MAIN_H
#define MAIN_H

#define STDOUT_FILE_DESC 1
#define NBYTES 1

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * types  -  define int for valid C types corresponding to format specifiers
 * Description: enum to hold ints representing types
 */
typedef enum
{
	NON_TYPE,
	CHAR,
	INT,
	DECIMAL,
	FLOAT,
	STRING
} types;

/**
 * struct fmt_spec - Struct format
 *
 * @specifier: char, corresponding to a valid type
 * @_type: unsigned int representing a type
 *
 * Description: struct to hold char specifying type and int for the type
 */
struct fmt_spec
{
	char specifier;
	types _type;
};

typedef struct fmt_spec format_spec;

/**
 * nspecials - enum to hold numbers for special characters
 * Description: Enum to map numbers onto naturally special
 * characters for the print function.
 */
typedef enum
{
	BACKSLASH,
	DBLQUOTE,
	SINGQUOTE,
	PERCENTS
} nspecials;

/**
 * nspec_chars - struct made of constant number and representative char
 *
 * @symbol: char, representing the special character
 * @_special: int
 *
 * Description: Map of special chars to constant ints
 */
struct nspec_chars
{
	char symbol;
	nspecials _special;
};

typedef struct nspec_chars special_chars;

/* _putchar - write 1 byte to stdout */
int _putchar(char c);

/* _strcmp - compare 2 strings */

/* _isbackslash - check if char is backslash */
int _isbackslash(char c);

/* _ispecifier - check if char is specifier indicator */
int _is_fspec(char c);

/* print_number - takes an int and prints it to stdout */
void print_number(int n);

/* _pow_recursion - returns x raised to the power y */
int _pow_recursion(int x, int y);

/* _puts - prints a string to stdout */
void _puts(char *str);

/* _printf - print f replica */
int _printf(const char *format, ...);

/* print_strings - prints a string to stdout */
void print_strings(char *s);

/* get_specifier - return a valid type base on the specifier passed */
unsigned int get_specifier(char c);

/* print_all - print any type of string and additional args passed */
void print_all(const char *str, va_list args, unsigned int *_bytes);

#endif
