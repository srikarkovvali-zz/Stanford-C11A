#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
 
int main ()
 
{
      int min, max, num;
       
      printf ("This will compute the minimum and maximum number in the list.Enter 0 to end list \n");
      printf ("Enter your first number: ");
      num = GetInteger();
      min != 0;
      max = 0;
      while (num!=0)
      {
            if (num < min)
            min = num;
            if (num > max)
            max = num;
            printf ("Enter your next number: ");
            num = GetInteger();
    }
            printf ("The maximum number in the list is %d.\n", max);
            printf ("The minimum number in the list is %d.\n", min);
            getchar();
}
