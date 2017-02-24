/*
File: average4.c
This program takes in a 4 numbers and gives out an an average value
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main ()
{
	int num1,num2,num3,num4,average;
	
	
	printf ("Please enter your 1st mark: ");
	num1 = GetInteger ();
	printf ("Please enter your 2nd mark: ");
	num2 = GetInteger ();
	printf ("Please enter your 3rd mark: ");
	num3 = GetInteger ();
	printf ("Please enter your 4th mark: ");
	num4 = GetInteger ();
	average = ((num1+num2+num3+num4)/4) ;
	printf ("Your average mark is: %d", average);
	
	

}
