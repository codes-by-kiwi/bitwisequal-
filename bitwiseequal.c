/*C program to check if two numbers are equal  
without using arithmetic operators or  
comparison operators 

*/


#include<stdio.h> 
  
int main() 
{ 
    int x,y;
    scanf("%d",&x); // scans x
    scanf("%d",&y); // scans y
   if ( (x ^ y) == 0 ) // using the bitwise operator XOR 
   /* 
   Since XOR means exclusive - or the following values are attained:
      X        Y        XOR
      1        1         0  
      0        1         1
      1        0         1
      0        0         0 
   */

      printf(" x is equal to y\n"); 
   else 
      printf(" x is not equal to y\n"); 
   return 0; 
} 
