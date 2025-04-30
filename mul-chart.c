#include <stdio.h>
int main(){

     for(int col = 1; col<6; col ++){
         for(int row = 1; row < 6; row ++){
            int mul = row * col;
            printf("%d\t", mul);
        }
        printf("\n");
    }


}
