#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

main()
{
 double a,b,c,x,d,x1,x2;
 d=((b*b)-(4*a*c));
 
    printf ("Please enter your first number (a): ");
    a=GetReal();
	printf ("Please enter your second number (b): ");
	b=GetReal();
	printf ("Please enter your third number(c): ");
	c=GetReal();
	
	if (a == 0 && b==0)
	{
	 printf ("This is not a quadratic equation.");	
	}
	
	else if (a==0 && b!=0)
	{
		printf ("This equation is linear.");
		x=(-c/b);
		printf ("The x value is %g", x);
	}
	
	else if (a>0||a<0 && b>0||b<0)
	{
		if (d<0)
		{
			printf ("There is no real solution.");
		}
		
		else if (d==0)
		{
			x1= ((-1*b)/(2*a));
			printf ("There is only one solution, which is %g.", x1);
		}
		
		else if (d>0)
		{
			x1= ((-b+(sqrt(d))/(2*a)));
			x2 = ((-b-(sqrt(d))/(2*a)));
			
			printf ("There are two solutions, %g and %g.", x1,x2);	
		}
	}
	
printf ("\n");
printf ("Press any key to exit: ");
getchar ();
}
