#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

    // ! Definizione array 2D
    short int const ROWS = 31;
    short int const COLUMNS = 5;
    short int class[ROWS][COLUMNS];
    
    // ! Generazione di interi signed (positivi) casuali. 
    srand((signed)time(NULL));


    for(int i = 0; i < ROWS; i++){

        // ! Somma dei voti di Studente (i)
        short signed int sum = 0; 

        printf("\nStudent n.%d\nVotes: ",i);
    
        
        for(int j = 0; j < COLUMNS; j++){
            
            class[i][j] = rand() % 10 + 1;

            // ! Pretty print dei voti di Studente (i)
            if(j != 4){
                printf("%d, ", class[i][j]);
            } else {
                printf("%d.\n", class[i][j]);
            }

            sum += class[i][j];
         
        }

        // ! Media dei voti di Studente (i)
        int avg = sum / 5;

        printf("Sum: %d\nAvg: %d\n", sum, avg);
        sum = 0;

    }

}