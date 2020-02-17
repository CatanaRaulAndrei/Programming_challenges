#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

int max(int count,...) {
    int max=MIN_ELEMENT,test;
    va_list values;
    va_start(values,count);
    for(int i=0;i<count;i++){
        test=va_arg(values,int);
        if(max<test){
            max=test;
        }  
    }
    va_end(values);
    return max;
}
int main( int argc, char**argv){
 system( "clear" );
 printf( "\n\n Variadic max functions: \n\n" );

 printf( "\n Max(90, 70 ,12, 25, 40, 37, 81)= %d ", max( 7, 90, 70, 12, 25, 40, 37, 81 ));
 printf( "\n Max(71, 21 ,6 ,45) = %d ",max( 4, 71, 21, 6, 45 )  );
 printf( "\n Max(21, 55 ,3, 8)= %d ", max( 4, 21, 55, 3, 8 )  );

 printf( "\n\n" );

 return EXIT_SUCCESS;
}
