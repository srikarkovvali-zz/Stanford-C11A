#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

main()
{
int num1,num2,originalnum1,originalnum2,temporarynum,loopnum;
printf ("Please enter a positive number. Make sure that your first number is greater than your second number: ");
num1= GetInteger ();

printf ("Please enter a second positive number: ");
num2= GetInteger ();

if (num1 > num2)
	{
		temporarynum = num2;
		num2 = num1;
		num1 = temporarynum;
	}

	originalnum1 = num1;
	originalnum2 = num2;

	if (num1 % num2 == 0)
	{
		printf("The GCD of %d and %d is %d\n", originalnum1, originalnum2, num2);
	}
	else
	{
		for (loopnum = num2; loopnum > 0; loopnum--)
		{
			if (num1 % loopnum == 0 && num2 % loopnum == 0)
			{
				printf("The GCD of %d and %d is %d\n", originalnum2, originalnum1, loopnum);
				break;
			}
		}
	}



getchar ();
}
