#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 
*/

#define minimum(firstNumber, secondNumber) (firstNumber < secondNumber ? firstNumber : secondNumber);
void find_pattern(int n){
    int length = 2*n - 1, min=0;
    
    for(int rows = 0; rows<length; rows++){
        for(int columns = 0; columns<length; columns++){
            min = minimum(rows, columns);
            min = minimum(min, length-rows-1);
            min = minimum(min, length-columns-1);
            printf("%d",n - min);
            
        }
        printf("\n");
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    find_pattern(n);
    return 0;
}
