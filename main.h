#ifndef MAIN_H
#define MAIN_H

#define STDOUT_FILE_DESC 1
#define NBYTES 1
#define ZERO 48
#define NEGATIVE_SIGN 45
#define LINE_FEED 10
#define BACKSLASH 8

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
	UINT,
	FLOAT,
	STRING
} types;

/**
 * fmt_spec - Struct format
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
	BACK_SLASH,
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
int _putchar(char c, int *count);

/* _isbackslash - check if char is backslash */
int _isbackslash(char c);

/* _ispecifier - check if char is specifier indicator */
int _is_fspec(char c);

/* print_number - takes an int and prints it to stdout */
void print_number(int n, int *count);

/* _pow_recursion - returns x raised to the power y */
int _pow_recursion(int x, int y);

/* _puts - prints a string to stdout */
void _puts(char *str, int *count);

/* _printf - print f replica */
int _printf(const char *format, ...);

/* print_strings - prints a string to stdout */
void print_string(char *s, int *count);

/* get_specifier - return a valid type base on the specifier passed */
unsigned int get_specifier(char c);

/* print_all - print any type of string and additional args passed */
void print_all(const char *str, va_list args, int *_bytes);

/* print_bin - prints the binary reprentation of positive int */
void print_bin(unsigned int n, int *count);

#endif
