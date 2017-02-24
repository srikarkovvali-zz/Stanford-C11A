#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


   int main()
{
    int input, reverse;
    printf("Enter value of input: ");
    input = GetInteger();
    for(reverse=0;input>0;input=input/10)
    {
       printf("%d \n",reverse);
	    reverse = reverse*10;
        reverse = reverse + (input%10);  
		
		//printf ("%d \n",reverse);
    }
    printf("Reverse number is: %d",abs(reverse));
    

	getch ();
}
