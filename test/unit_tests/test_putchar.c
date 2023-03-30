#include <stdio.h>
#include <assert.h>
#include "../main.h"

int _putchar(char c);

int main(void) {
    // Test single character input
    printf("Testing single character input:\n");
    assert(_putchar('a') == 1);
    printf("\nExpected result: 1\n");
    printf("\nActual result:   %d\n", _putchar('a'));
    printf("\n");

    // Test multiple character input
    printf("\nTesting multiple character input:\n");
    assert(_putchar('b') == 1);
    assert(_putchar('c') == 1);
    printf("\nExpected result: 1\n");
    printf("\nActual result:   %d\n", _putchar('c'));
    printf("\n");

    // Test special character input
    printf("Testing special character input:\n");
    assert(_putchar('$') == 1);
    printf("\nExpected result: 1\n");
    printf("\nActual result:   %d\n", _putchar('$'));
    printf("\n");

    // Test invalid input
    printf("Testing invalid input:\n");
    assert(_putchar('\0') == -1);
    printf("\nExpected result: -1\n");
    printf("\nActual result:   %d\n", _putchar('\0'));
    printf("\n");

    printf("All tests passed.\n");

    return 0;
}

int _putchar(char c)
{
	return (write(STDOUT_FILE_DESC, &c, NBYTES));
}
