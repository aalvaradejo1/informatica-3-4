#include <stdio.h>
int main(){

//excercise 1
int n;
printf("Enter a positive number: ");
scanf("%d", &n);

int i;
int sum =0;
for(i = 1; i < n + 1; ++i){
    sum = sum +i; 
}

printf("%d\n", sum);

int factorial = 1;
for(i = 1; i < n + 1; ++i){
    factorial = factorial *i; 
}
printf("%d\n", factorial);
}