#include <stdio.h>
int main(){
//area
   int length = 6;
   int width =4;
  
   int area = (length * width);
   int perimiter = (length * 2) + (width * 2);


// fahrenheit to celsius
int fahrenheit = 45;
int celsius = (fahrenheit-32)/1.8;

//minutes into hours
int minutes = 349;
int hours = minutes/60;
//int hoursleft = minutes - hours * 60;
int modulus = minutes % 60;

//area
printf("Area:%d\n",area);
printf("Perimiter:%d\n", perimiter);

//grados
printf("%d°F = %d°C\n", fahrenheit, celsius);

//horas
printf("%d minutes is equal to %d hours and %d minutes\n",minutes, hours, modulus);


return 0;

}