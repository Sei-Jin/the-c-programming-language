// Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300; floating-point version

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 
	upper = 300;
	step  = 20;

	fahr = lower;
	
	// print heading
	printf("Fahrenheit Celsius\n");
	printf("------------------\n");

	// print values
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%9.0f %8.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}


