// Write a C program that swaps two numbers without using a temporary variable.

#include <stdio.h>

int main()
{
   int x=10 , y=20;
   x = (x+y) - (y=x);
   printf("x = %d y = %d", x, y);  
return 0;
}






