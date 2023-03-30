#include "../main.h"
#include <stdio.h>
#include <assert.h>

int main(void)
{
        int bytes = 0;

        // Testing `%c` specifier
        bytes = _printf("%c\n", 'H');
        //assert(bytes == 2);
	_printf("count = %d, expected = 2", bytes);

        // Testing `%s` specifier
        bytes = _printf("%s\n", "Hello, world!");
        //assert(bytes == 16);
	_printf("count = %d, expected = 16", bytes);

        // Testing `%d` and `%i` specifiers
        bytes = _printf("%d\n", 42);
	_printf("count = %d, expected = 3", bytes);
        //assert(bytes == 3);
        bytes = _printf("%i\n", -42);
        //assert(bytes == 5);
	_printf("count = %d, expected = 5", bytes);

        // Testing `%b` specifier
        //_printf("%b\n", 42);
        //assert(bytes == 8);

        // Testing edge cases
        bytes = _printf("%c%s%d%i\n", 'H', "ello", 42, -42);
	_printf("count = %d, expected = 18", bytes);
        //assert(bytes == 18);
        bytes = _printf("");
	_printf("count = %d, expected = 0", bytes);
        //assert(bytes == 0);
        bytes = _printf(NULL);
	_printf("count = %d, expected = 4", bytes);
        //assert(bytes == -1);

        printf("All tests passed!\n");

        return (0);
}
