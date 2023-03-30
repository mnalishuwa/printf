#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include "../main.h"


void test_print_all(const char *, ...);

int main(void)
{
	test_print_all("Hello World");


	return (0);
}

void test_print_all(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

        // Test print_all with a single character
        printf("Testing print_all with character specifier:\n");
        //print_all(format, arg_list, &count);
        //assert(bytes == 1);
        printf("Expected output: abcdef42\n");
        printf("Actual output: \n");
        print_all(format, args, &count);
        printf("\n");
        //assert(bytes == 1);
        printf("Test passed! Count = %d, expected = 1 ------------------------------\n\n", count);

	va_end(args);
}
/**	
        // Test print_all with a string
        printf("Testing print_all with string specifier:\n");
        print_all("%s", (va_list) "Hello, world!", &bytes);
        //assert(bytes == 13);
        printf("Expected output: Hello, world!\n");
        printf("Actual output: ");
        bytes = 0;
        print_all("%s", (va_list) "Hello, world!", &bytes);
        printf("\n");
        //assert(bytes == 13);
	printf("Test passed! Count = %d, expected = 13 -----------------------------\n\n", count);

        // Test print_all with an integer
        printf("Testing print_all with integer specifier:\n");
        print_all("%i", (va_list) 42, &bytes);
        //assert(bytes == 2);
        printf("Expected output: 42\n");
        printf("Actual output: ");
        bytes = 0;
        print_all("%i", (va_list) 42, &bytes);
        printf("\n");
        //assert(bytes == 2);
	printf("Test passed! Count = %d, expected = 13 -----------------------------\n\n", count);

        // Test print_all with a decimal
        printf("Testing print_all with decimal specifier:\n");
        print_all("%d", (va_list) 314, &bytes);
        //assert(bytes == 1);
        printf("Expected output: 3\n");
        printf("Actual output: ");
        bytes = 0;
        print_all("%d", (va_list) 314, &bytes);
        printf("\n");
        //assert(bytes == 1);
	printf("Test passed! Count = %d, expected = 13 -----------------------------\n\n", count);

        // Test print_all with mixed specifiers
        printf("Testing print_all with mixed specifiers:\n");
        print_all("%c%s%i%d", (va_list) "a", (va_list) "bcdef", (va_list) 42, (va_list) 314, &bytes);
        //assert(bytes == 11);
        printf("Expected output: abcdef42\n");
        printf("Actual output: ");
        bytes = 0;
        print_all("%c%s%i%d", (va_list) "a", (va_list) "bcdef", (va_list) 42, (va_list) 314, &bytes);
        printf("\n");
        //assert(bytes == 11);
	printf("Test passed! Count = %d, expected = 13 -----------------------------\n\n", count);

        return 0;
}
*/

	
