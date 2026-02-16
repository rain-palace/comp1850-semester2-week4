
/*
 * Factorial
 */

#include <stdio.h>

float main( void ){
   float f[20];

   /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for(int k=0; k<1; ++k){
      f[k]=1;
      printf("%d factorial is: %.0f\n", k, f[k]);
   }
   for(int k=1; k<20; ++k){
      f[k]=k*f[k-1];
      printf("%d factorial is: %.0f\n", k, f[k]);
   }
   return 0;
}
