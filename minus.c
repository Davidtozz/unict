#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int a,b,c;

    printf("Write three numbers: ");
    scanf("%i %i %i", &a, &b, &c);

    if(a < b && a < c){
        printf("\nSmallest: %d\n", a);
    } else if(b < a && b < c) {
        printf("Smallest: %d", b);
    } else {
        printf("Smallest: %d", c);
    }

}