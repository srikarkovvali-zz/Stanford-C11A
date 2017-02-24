#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* File name: power.c
* This program outputs the numbers from 1 to 50 and outputs their squares..*/
main()
{
 float cel,farh,factor=0.55555;
 for (farh=0;farh<=200;farh+=20)
 {
	 cel= ((factor*(farh-32)));
	 
	
	 printf ("%f    %f \n",farh,cel);
 }
getchar ();
}
