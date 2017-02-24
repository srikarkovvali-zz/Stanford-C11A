/*The following program checks if the number entered by the user 
is even or odd. Accordingly it updates the value of even, and displays a message
on the screen */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main ()
{
	int num,numabs;
	
	printf ("Enter any integer: ");
	num = GetInteger ();
	
	if (num<0)
	{
		numabs=num*-1;
		printf ("The number %d is negative and it's absolute value is %d", num,numabs);
	
	}
	
	if (num>0)
	{
		numabs= num;
		printf ("The number %d is positive and it's absolute value is %d", num,numabs);
	}
		
}
