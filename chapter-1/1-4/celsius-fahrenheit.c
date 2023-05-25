// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

// print Celsius-Fahrenheit table
// for celsius = 0, 20, ..., 300; floating-point version

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 
	upper = 300;
	step = 20;

	fahr = lower;
	
	// print heading
	printf("Celsius Fahrenheit\n");
	printf("------------------\n");

	// print values
	while (celsius <= upper)
	{
		fahr = (9.0/5.0) * (celsius+32.0);
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}


