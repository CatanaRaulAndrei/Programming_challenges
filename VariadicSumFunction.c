int  sum (int count,...) {
    int sum=0;
    va_list values;
    va_start(values,count);
    for(int i=0;i<count;i++){
        sum+=va_arg(values,int);
    }
    va_end(values);
    return sum;
}
int
main( int argc, char**argv){
 system( "clear" );
 printf( "\n\n Variadic functions: \n\n" );

 printf( "\n 10 + 20 = %d ",           sum( 2, 10, 20 )  );
 printf( "\n 10 + 20 + 30 = %d ",      sum( 3, 10, 20, 30 )  );
 printf( "\n 10 + 20 + 30 + 40 = %d ", sum( 4, 10, 20, 30, 40 )  );

 printf( "\n\n" );

 return EXIT_SUCCESS;
}
