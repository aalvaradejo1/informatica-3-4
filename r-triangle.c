#include <stdio.h>
int main(){

    int height;
    printf("Enter a number to define the height of your triangle:");
    scanf("%d", &height);
    
    int row;
    int col;
    for(row = 1; row <= height; row++){
        for(col =1; col<= row; col++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
