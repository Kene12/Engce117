#include<stdio.h>
#include <conio.h>
/* ---| Function main : Processing  |---  */
int main(){
    int Count, Num = 0; 							  			   // Variable Declaration
    /* ---| User Input |---  */
	printf( "Input number of element to be store in array : " );   // output message
	scanf( "%d", &Num );										   // collect value from user
	printf( "\n-------------------------------------------------\n");
    int array[ Num ];												   // Variable array
    /* ---| Enter number in array |---  */
	for( int x = 0 ; x < Num ; x++ ){
    	printf( "Element[%d] : ", x+1 );							// output message
    	scanf( "%d" , &array[ x ] );								  	// collect value in array
	}// end for
	printf( "\n-------------------------------------------------\n");
	/* ---| Processing For Loop Check Repetition of Information |---  */
    for(int i = 0; i < Num ; i++ ){
        Count = 1 ;													// Count num
        for(int j = i+1 ; j <= Num-1 ; j++ ){						
            if( array[ i ] == array[ j ] && array[ i ] != 0 ){			
                Count++ ;											// Increase Count
                array[ j ] = 0;										// 0 substitute in array
            }// end if
        }// end for
        /* ---| Output Section |--- */
        if( array[ i ] != 0 ){
            printf( "%d -> %d \n" , array[ i ], Count );				// Output Number and Duplicate Number
        }// end if
    }// end for
    printf( "\nEnter to exit : ");
    getch();
    return 0;
}//end main function
