# printf notes

1 Create list of older project functions that might be necessary or that are in a way
already a pre-built piece of printf, or rather do some aspect of what printf does e.g. print_numbers, print a number, print a string, print a character, etc.

- write
- _putchar
- malloc
- free
- 0x02-4-isalpha.c
- 0x03-0-positive_or_negative.c
- 0x04-3-print_numbers.c
- 0x05-2-strlen.c, 9-strcpy, 5-rev_string, 
- 0x06-3-strcmp.c, 0-strcat, rot13.c 
- 0x07-memset.c, strchr.c, strstr.c, strspn.c, memcpy.c, set_string
- 0x0B-alloc_grid.c, free_grid.c, argtostr.c, create_array.c
- 0x0C-malloc_checked, array_range.c
- 0x0F-op_functions.c, get_ob_function.c, array_iterator.c
- 0x10-print_numbers.c, print_strings.c, print_all.c


1.1. Simple case `printf`
- Takes single argument (string of characters to be printed, to stdout by default)
	1. write function: write(int file_descriptor, const void *buf, size_t nbytes)
	
	2. putchar: int _putchar(char c) -> write(STDOUT_FILENO, SIZE_CHAR, SIZE_CHAR_BYTES)
	e.g. `printf("xyz")` would simply print `x`, then `y`, then `z`
	
	3. Naturally special characters {\, ", ', %}, {\\, \", \', \%}
	have syntactical meaning and need to be escaped with a \ in order to 
	be write as part of the BYTES stream
	
	4. Altenately special characters {a, b, f, n, r, t, v} would print 
	normally but have special meaning when preceded by a backslash i.e \n 
	translates to a LINEFEED character or new line.
	
	4. Format specifiers {c, d, e, f, g, i, o, s, u, x} print normally but specify format or `types` of the parameters that will be passed as variable arguments. 
	
	* Therefore it will be necessary to create functions that handle each format, such that these functions can be interleavenly called by the 
	printf and other functions as necessary.
	
	* printf is effectively a variadic function that takes atleast 1 named 
	argument in its simplest form, and 0 or more valid type (int, float, etc.) 
	arguments. 
	
	* For each unnamed argument prinf dynamically computes and allocates the right amount of memory necessary at runtime and frees the memory after 
	use.
	
	* printf figures out the types and number of arguments passed by first 
	parsing the string passed and identifying naturally special characters, 
	alternately special characters, and format specifiers. functions need 
	to be defined to process each type.
	
	* For each type found based on the format the printf must process the 
	format specifier, next it must determine the appropriate or valid C
	type, and then allocate the amount of memory necessary via a function, 
	(We can create different functions to determine type, another function 
	can allocate memory once type is known)
	
	* Next a function to print each format type can be called for each
	argument, a function will receive a type and return a pointer to the 
	appropriate function that is designed to print that specific type.
	
	* The called function will the print the argument passed and return 
	control to the caller. In simplest for the print simply writes each 
	byte to the specified file stream (stdout) by default. 
		- first it checks for a naturally occuring special character
		and processes as required, with \ taking highest precedence.
		- next checks for alternate special characters
		- next checks for format specifiers
		- creates sufficient memory for any specified args
		- calls type specific function to print the known argument type
		- free the memory
		- move to next byte in the stream and repeat.
	

2. Review and understand these function again as necessary.

3. Consider how functions can be put together, having interleaving functions alternate and call each other having flow of control switch between them. Consider how function pointers help to this end this can help organize the complex functionality of printf into modular pieces that will result in a robust and more maintainable function.
 
4. Create some basic flowcharts summarizing some of the tools necessary.

5. Identify constants, macros and libraries that will be necessary as per 
requirements scope.

6. Create of modify functions and function helpers as necessary for our use case

NB: This can form basis for README.md once relevant functions are created and tested

