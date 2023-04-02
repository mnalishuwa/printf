#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void _puts(char *str, int *count);

int main(void)
{
    int count = 0;

    // Test case 1: empty string
    printf("\nTest case 1: empty string\n");
    char str1[] = "";
    _puts(str1, &count);
    assert(count == 0);
    count = 0;

    // Test case 2: string with one character
    printf("\nTest case 2: string with one character\n");
    char str2[] = "a";
    _puts(str2, &count);
    assert(count == 1);
    count = 0;

    // Test case 3: string with multiple characters
    printf("\nTest case 3: string with multiple characters\n");
    char str3[] = "hello, world";
    _puts(str3, &count);
    printf("\nCount = %d, strlen = %zu", count, strlen(str3));
    assert(count == (int)strlen(str3));
    count = 0;

    // Test case 4: string with newline character
    printf("\nTest case 4: string with newline character\n");
    char str4[] = "hello\nworld";
    _puts(str4, &count);
    printf("\nCount = %d, strlen = %zu", count, strlen(str4));
    assert(count == (int)strlen(str4));
    count = 0;
    
    // Test case 5: string with special characters
    printf("\nTest case 5: string with special characters\n");
    char str5[] = "hello\tworld";
    _puts(str5, &count);
    printf("\nCount = %d, strlen = %zu", count, strlen(str5));
    assert(count == (int)strlen(str5));

    printf("\nAll tests passed!\n");

    return 0;
}

void _puts(char *str, int *count)
{
    int char_index;

    for (char_index = 0; *(str + char_index) != '\0'; char_index++)
    {
        putchar(*(str + char_index));
	*count = *count + 1;
    }
}
