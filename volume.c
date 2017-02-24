/*
File: volume.c
This program takes in a user value and sqaures it ultimately giving an output of a cube's volume.
*/

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main ()
{
	int cubeval,volume;
	
	
	printf ("Please enter the side value of the cube: ");
	cubeval = GetInteger ();
	volume = cubeval*cubeval*cubeval;
	printf ("The volume of a cube with a side length of %d", cubeval);
	printf (" is %d", volume);

}
