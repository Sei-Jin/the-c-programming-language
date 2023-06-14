// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
// more blanks by a single blank. 

#include <stdio.h>

int main(void)
{		
	char character, last_character;	

	while ((character = getchar()) != EOF)
	{
		if (last_character == ' ' && character == ' ')
		{
			continue;
		}
		
		printf("%c", character);	
		last_character = character;
	}

	return 0;
}
