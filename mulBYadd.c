#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* File name: mulBYadd.c
* This program displays a message on the screen*/
main()
{
 int num1, num2, product=0;
 int add;
 
 printf ("Please enter your first number: ");
 num1=GetInteger ();
 
 printf ("Please enter your second number: ");
 num2=GetInteger ();
 
 for (add=0;add<num2;add++)
	{
 		product=product + num1;	
 	}
 printf ("The product is %d", product);
 getchar ();
 
}
