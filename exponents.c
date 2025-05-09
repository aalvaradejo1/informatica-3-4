#include <stdio.h>
#include <math.h>
int main(){

    int base;
    int exp;
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

    pow(base ** exp);

    printf(" %d ^ %d  = %d", base, exp, pow )
}
