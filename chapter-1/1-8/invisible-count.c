// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
	int count = 0;
	char c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			count++;
		}
	}
	
	printf("Total count: %d\n", count);
}
