// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
// backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
// unambiguous way.

#include <stdio.h>

int main(void)
{
	char character;

	while((character = getchar()) != EOF)
	{
		if(character == '\t')
		{
			printf("\\t");
		}
		else if(character == '\b')
		{
			printf("\\b");
		}
		else if(character == '\')
		{
			printf("\\");
		}
		else
		{
			printf("%c", character);
		}
	}

	return 0;
}	
