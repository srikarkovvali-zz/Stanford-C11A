/*
This program will take in an input of a number and will output
if the month is is in summer or not 
Program Name: summer.c
*/

#include <stdio.h>
#include "simpio.h"
#include "genlib.h" 

main ()

{
	int month;
	char exit;
	
	printf ("Please enter a number corresponding to a month: (1=January...etc): ");
	month = GetInteger ();
	
	switch (month)
	{
		case 1:				
				printf ("January! Boo it is not summer! \n");
				getchar();
				break;			
		case 2: 
				printf ("February! Boo it is not summer! \n");
				break;
		case 3:
				printf ("March! Boo it is not summer! \n");
				break;
		case 4:
				printf ("April! Boo it is not summer! \n");
				break;
		case 5:
				printf ("May! Boo it is not summer! \n");
				break;
		case 6: 
				printf ("June! Yay it is summer! \n");
				break;
		case 7:
				printf ("July! Yay it is summer! \n");
				break;
		case 8:
				printf ("August! Yay it is summer! \n");
				break;
		case 9:
				printf ("September! Boo it is not summer! \n");
				break;
		case 10:
				printf ("October! Boo it is not summer! \n");
				break;
		case 11:
				printf ("November! Boo it is not summer! \n");
				break;
		case 12:
				printf ("December! Boo it is not summer! \n");
				break;
		default:
				printf ("The number you entered does not correspond to a month");
					
			
	}
	("Press any key to exit: ");
	exit= getchar();
	
}
