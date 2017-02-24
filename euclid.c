
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/*
 * File: euclid.c
 * This program computes the GCD of two numbers using Euclid's algorithm
 */

main()
{
	int num1, num2, temporarynumber, originalnum1, originalnum2, rem;

	printf("This program computes the GCD of two numbers using Euclid's algorithm\n");
	printf("Enter first number: ");
	num1=GetInteger ();
	printf("Enter second number: ");
	num2 = GetInteger();


	rem = num1 % num2;

	if (rem == 0)
	{
		printf("The GCD of %d and %d is %d\n", num1, num2, num2);
	}
	else
	{
		while (rem != 0)
		{
			num1 = num2;
			num2 = rem;
			rem = num1 % num2;
		}
		printf("The GCD of the two numbers is %d", num2);
	}
	getchar();
}

	
	

