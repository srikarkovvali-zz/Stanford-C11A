/*
This program will take in the numbers 1,2 and 3 and output its binary value.
*/

#include <stdio.h>
#include "simpio.h"
#include "genlib.h" 

main ()
{
	char exit;
	int decimal;
	
	printf("Enter an integer in decimal number system\n");
	decimal = GetInteger();
	
	switch (decimal)
	{
		case 0:
				printf ("The Binary value is 00");
				break;
		case 1:
				printf ("The Binary value is 01");
				break;
		case 2:
				printf ("The Binary value is 10");
				break;
		case 3:
				printf ("The Binary value is 11");
				break;
		default:
				printf ("The input you entered,%d, is not in range",decimal);
						
				
	}
	printf ("\n");
	printf ("Press any key to exit: ");
	exit=getchar();
 
  
  
 
 
}
