

#include <stdio.h>
#include "simpio.h"
#include "genlib.h" 

main ()

{
	int day;
	char exit;
	
	printf ("Please enter a number corresponding to a day: (1=Sunday...etc): ");
	day = GetInteger ();
	
	switch (day)
	{
		case 1:				
				printf ("SUNDAY!\n");
				getchar();
				break;			
		case 2: 
				printf ("MONDAY!\n");
				break;
		case 3:
				printf ("TUESDAY!\n");
				break;
		case 4:
				printf ("WEDNESDAY!\n");
				break;
		case 5:
				printf ("THURSDAY! \n");
				break;
		case 6: 
				printf ("FIRDAY! \n");
				break;
		case 7:
				printf ("SATURDAY! \n");
				break;
		
		default:
				printf ("The number you entered,%d,does not correspond to a day",day);
					
			
	}
	("Press any key to exit: ");
	exit= getchar();
	
}
