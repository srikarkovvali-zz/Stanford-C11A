#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
/*
This program takes in an infinite number of strings and outputs the largest string and the number of characters the string contains.
ui=userinputstring
uil=userinputstringlength
compW= or CompareWord stores the largest word that has been inputted so far by the user.
compL= or CompareLength stores the largest word's and cotnrols the value of the first largest word entered by the user.
*/


main()
{
	string ui,compW="";
	int uil=0,compL=0;
	printf ("Signal the end of your input list with the word end \n");
	printf ("Enter your first string: ");
	ui=GetLine();
	uil= StringLength (ui);
	
	if (uil>compL)
		{
			compL=uil;
			compW=ui;
		}	


	while (!StringEqual(ui,"end"))
	{
		printf ("Please enter another string: ");
		ui = GetLine ();
		uil= StringLength (ui);
		if (uil>compL)
		{
			compL=uil;
			compW=ui;
		}	
			
	}
	
	printf ("The largest word is: %s. It's length is %d.\n",compW,compL);
	printf ("Thanks for using the program.\n");
	printf ("Press any key to exit: ");
getchar();
}

	

	
	

