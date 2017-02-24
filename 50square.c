#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* File name: power.c
* This program outputs the numbers from 1 to 50 and outputs their squares..*/
main()
{
int num1,square;
 for (num1=1;num1<=50;num1++)
 {
	 square=num1*num1;
	 printf ("%d    %d \n",num1,square);
 }
getchar ();
}
