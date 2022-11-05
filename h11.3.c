#include <stdio.h>
#include <math.h>
#include <signal.h>

int main(void){

    


    printf("\na: %.f\n", 2.0 / 0);
    
    printf("b: %d", 2 / 0);
    if(2 / 0 == SIGFPE) printf("error");
    
/**
 * ? Floats are made in such a way they're able to be represented in NaN, INF etc.  
 * ? But integer numbers are not: every bit pattern corresponds to an integer, so
 * ? diving one by zero causes an error. 
 * ?
 * */    


}