#include <stdio.h>

int main(void) {
    
    int x = -4;
    int y = 2;
    
    while(y != 0){
        
        y *= x;
        printf("\nTest: %d", y);
    }    
    
    printf("\n\n ------- END OF CASE ONE -------- \n");

    int a = -7;
    int b = -2;

     while(a != 0){
        
        a *= b;
        printf("\nTest: %d", a);
    }  

    printf("\n ---- END ----\n");
}