/*
File: addMul.c
This program adds and multiples two numbers.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main ()
{
	int num1, num2, sum, product;
	
	printf ("The program adds and multiples two numbers.\n");
	printf ("Enter 1st number?");
	num1 = GetInteger ();
	printf ("Enter 2nd number?");
	num2 = GetInteger ();
	sum = num1+num2;
	product = num1* num2;
	printf ("The sum is:  %d.\n", sum);
	printf ("The product is:  %d.\n", product);
}
