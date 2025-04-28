#include <stdio.h>
int main(){
//leap year

int year;
printf("Enter a year:");
scanf("%d", &year);

if (year % 4 == 0 && year % 100 != 0){
    if (year % 100 != 0);
    printf("%d It's a leap year\n", year);
} else (year % 400 ==0){
    printf("It's a leap year");
}
return 0;
}