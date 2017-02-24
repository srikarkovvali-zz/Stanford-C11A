/*
File: max.c
This program takes in 2 numbers and tells which one is the largest.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main ()
{
	int num1,num2,num3;
	
	
	printf ("Please enter your 1st number: ");
	num1 = GetInteger ();
	printf ("Please enter your 2nd number: ");
	num2 = GetInteger ();
	
	if (num1>num2)
		printf ("The maximum number between %d and %d is %d", num1,num2,num1);
	if (num2>num1)
		printf ("The maximmum number between %d and %d is %d", num1,num2,num2);
	if (num1 == num2)
		printf ("Both the numbers you entered, %d and %d are equal", num1,num2);
}
