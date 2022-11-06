#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a = 5;

    int* b = &a;
    int* c = &a;

    printf("a = %d\n", a);
    printf("b = %d\n", *b);
    
    *b = 8;

    printf("c = %d\n", *c);
    printf("a = %d", a);

}