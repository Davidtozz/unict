#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

    short int const ROWS = 31;
    short int const COLUMNS = 5;
    short int class[ROWS][COLUMNS];
    
    srand((signed)time(NULL));

    for(int i = 0; i < ROWS; i++){
        short signed int sum = 0;

        printf("\nStudent n.%d\nVotes: ",i);
        char votes[4]; 
        
        for(int j = 0; j < COLUMNS; j++){
            
            class[i][j] = rand() % 10 + 1;
            if(j != 4){
                printf("%d, ", class[i][j]);
            } else {
                printf("%d.\n", class[i][j]);
            }

            sum += class[i][j];
         
        }
        int avg = sum / 5;

        printf("Sum: %d\nAvg: %d\n", sum, avg);
        sum = 0;

    }

}