#include <stdio.h>
int main(){
//leap year

int year;
printf("Enter a year:");
scanf("%d", &year);

if ((year % 4 == 0 && year % 100 != 0)|| year % 400){
}    
return 0;
}