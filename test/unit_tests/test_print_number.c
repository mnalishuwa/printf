#include <stdio.h>
#include <limits.h>
#include "../main.h"

void print_number(int n, int *count);
int _pow_recursion(int x, int y);

int main(void)
{
        int count = 0;
        
        printf("Test Case 1 - Print a positive integer:\n");
        printf("Expected Result: 123\n");
        printf("\nActual Result: \n");
        fflush(stdout);
        print_number(123, &count);
        printf("\nCount = %d, Pass or Fail: %s\n", count, count == 3 ? "Pass" : "Fail");
        printf("------------------------------------------------------------------\n");
	count = 0;

        printf("Test Case 2 - Print a negative integer:\n");
        printf("Expected Result: -456\n");
        printf("\nActual Result: \n");
        fflush(stdout);
        print_number(-456, &count);
        printf("\nCount = %d, Pass or Fail: %s\n", count, count == 4 ? "Pass" : "Fail");
        printf("------------------------------------------------------------------\n");
	count = 0;

        printf("Test Case 3 - Print zero:\n");
        printf("Expected Result: 0\n");
        printf("\nActual Result: \n");
        fflush(stdout);
        print_number(0, &count);
        printf("\nCount = %d, Pass or Fail: %s\n", count, count == 1 ? "Pass" : "Fail");
        printf("------------------------------------------------------------------\n");
	count = 0;

        printf("Test Case 4 - Print INT_MIN:\n");
        printf("Expected Result: -2147483648\n");
        printf("\nActual Result: \n");
        fflush(stdout);
        print_number(INT_MIN, &count);
        printf("\nCount = %d, Pass or Fail: %s\n", count, count == 11 ? "Pass" : "Fail");
        printf("------------------------------------------------------------------\n");
	count = 0;

        printf("Test Case 5 - Print INT_MAX:\n");
        printf("Expected Result: 2147483647\n");
        printf("\nActual Result:\n");
        fflush(stdout);
        print_number(INT_MAX, &count);
        printf("\nCount = %d, Pass or Fail: %s\n", count, count == 10 ? "Pass" : "Fail");
        printf("------------------------------------------------------------------\n");

        return 0;
}
