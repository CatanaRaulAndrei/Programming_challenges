#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000


int min(int count,...) {
    int min=MAX_ELEMENT,test;  
    va_list values;
    va_start(values,count);
    for(int i=0;i<count;i++){
        test=va_arg(values,int);
        if(min>test){
            min=test;
        }  
    }
    va_end(values);
    return min;
}


int main( int argc, char**argv){
 system( "clear" );
 printf( "\n\n Variadic min functions: \n\n" );

 printf( "\n Minimum(90, 70 ,12, 25, 40, 37, 81)= %d ", min( 7, 90, 70, 12, 25, 40, 37, 81 ));
 printf( "\n Minimum(71, 21 ,6 ,45) = %d ",min( 4, 71, 21, 6, 45 )  );
 printf( "\n Minimum(21, 55 ,3, 8)= %d ", min( 4, 21, 55, 3, 8 )  );

 printf( "\n\n" );

 return EXIT_SUCCESS;
}
