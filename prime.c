#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
	int a, b, isPrime;

	printf("This program displays all the prime numbers from 50 to 100\n");

	for (a = 50; a <= 100; a++)
	{
		isPrime = 1;
		for (b = 2; b < a; b++)
		{
			if ((a % b) == 0)
			{
				isPrime = 0;
				break;
			}
		}
		printf((isPrime == 1)  ? "%d\n" : "", a);
	}
	getch ();
}
