#include <stdio.h>

long SumLoop( int n ) ;
long SumRecur( int n ) ;

int main() {
 printf( "SumLoop(n) = %d", SumLoop( 10 ) ) ;
 printf( "SumRecur(n) = %d", SumRecur( 10 ) ) ;
 return 0 ;
}//end function

long SumLoop( int n ){
	int i;
	long fac = 1;
	for( i = 1; i <= n; i++ ){
		fac *= i;
	}//end for loop
	return fac;
}//end function SumLoop

long SumRecur( int n ){
	if( n > 1 ){
		return n * SumRecur( n - 1 );
	}//end if
	return 1;
}//end function SumRecur
