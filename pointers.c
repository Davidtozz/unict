#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // long int x = 5;
    // long int *pX = &x;

    // printf("x = %d\n", x);
    // printf("pX = %d\n", *pX);

    // printf("\nsizeof x: %ld", sizeof(x));
    // printf("\nsizeof pX: %ld\n", sizeof(pX));

    int a = 5;

    int* b = &a;
    int* c = &a;

    printf("a = %d\n", a);



    printf("b = %d\n", *b);
    
    *b = 8;

    printf("c = %d\n", *c);
    printf("a = %d", a);

    

}