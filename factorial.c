#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


int main()
{
    long  x,factorialans=1;
    for (x=1;x<11;x++)
	{
 		factorialans=factorialans *x;	
 		printf ("%lu      %lu\n",x,factorialans);
 	}
	getch ();
}
