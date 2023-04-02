#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../main.h"

void print_string(char *s, int *count);

int main(void)
{
    int count = 0;

    // Test with a non-null string
    char str[] = "Hello, world!";
    printf("Test 1 - print non-null string:\n");
    printf("Expected output: %s\n", str);
    fflush(stdout);
    printf("Actual output: \n");
    print_string(str, &count);
    assert(count == (int)strlen(str));
    count = 0;

    // Test with a null string
    char *null_str = NULL;
    printf("\nTest 2 - print null string:\n");
    printf("Expected output: (null)\n");
    fflush(stdout);
    printf("Actual output: \n");
    print_string(null_str, &count);
    assert(count == (int)strlen("(null)"));
    count = 0;

    // Test with an empty string
    char empty_str[] = "";
    printf("\nTest 3 - print empty string:\n");
    printf("Expected output: %s\n", empty_str);
    fflush(stdout);
    printf("Actual output: \n");
    print_string(empty_str, &count);
    assert(count == (int)strlen(empty_str));
    count = 0;

    return 0;
}
