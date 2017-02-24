#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* File name: power.c
* This program asks for a base and exponent and gives out an answer.*/
main()
{
 int base,exponent, power, multiply=1;

 
 printf ("Please enter the base: ");
 base=GetInteger ();
 
 printf ("Please enter your exponent: ");
 exponent=GetInteger ();
 
 for (power=0;power<exponent;power++)
	{
 		multiply=multiply * base;	
 	}
 printf ("The answer is %d", multiply);
 getchar ();
 
}
