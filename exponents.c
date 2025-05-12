#include <stdio.h>
#include <math.h>
int main(){

    int base;
    int exp;
    int result;
    //int count = 1;

    printf("Enter the base number: ");
    scanf("%d", &base);

   printf("Enter the exponent: ");
    scanf("%d", &exp);

    //int ans = base;
    
    //while (count < exp ){
      //  ans = ans * base;
        //++count;
   // }
    //printf("%d ^ %d = %d\n", base, exp, ans);
      result = pow(base, exp);

    

    printf(" %d ^ %d  = %d\n", base, exp, result);
   }
