/*
This program asks the user to input 3 integers and then the 
program will compare the three and output whichever number
is the smallest. 
Program Name: min3.c
*/

#include <stdio.h>
#include "simpio.h"
#include "genlib.h" 

main ()
{
	int num1,num2,num3;
	char exit;
	
	printf ("Please enter your 1st number: ");
	num1 = GetInteger ();
	
	printf ("Please enter your 2nd number: ");
	num2 = GetInteger ();
	
	printf ("Please enter your 3rd number: ");
	num3 = GetInteger ();
	
	if (num1<num2 && num1<num3)
		printf ("The minimum number between %d, %d and %d is %d \n", num1,num2,num3,num1);
		
	if (num2<num1 && num2<num3)
		printf ("The minimum number between %d, %d and %d is %d \n", num1,num2,num3,num2);
		
	if (num3<num1 && num3<num2)
		printf ("The minimum number between %d, %d and %d is %d \n", num1,num2,num3,num3);
		
	if (num1==num2&&num1==num3&&num3==num1)
		printf ("All 3 numbers have the same value which is: %d \n", num1);
	
	if (num1==num2 && num1<num3)
		printf ("The first two numbers you entered are equal with a value of %d and the largest  number is %d \n", num1, num3);
		
	if (num1==num3 && num1<num2)
		printf ("The first and third numbers you entered are equal with a value of %d and the    largest number is %d \n", num1, num2);
	
	if (num2==num3 && num2<num1)
		printf ("The second and third numbers you entered are equal with a value of %d and the   largest number is %d \n", num2, num1);
	
	printf ("Press any key to exit: ");
	
	exit= getchar();
}
