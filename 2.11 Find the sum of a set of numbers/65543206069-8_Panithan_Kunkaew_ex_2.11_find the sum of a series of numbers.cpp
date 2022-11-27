#include <stdio.h>
#include <math.h>
#include <conio.h>
/* ---| Function Name : forlooper |---  
	@Parameter  Input   inter  int    Numerber user
	@Return     Output  printf  number9 by number user and Sum number9
*/
void forlooper( int inter ){
	double Value = 0, Value2 = 9, Series = 0, Sum = 0, Power = 1 ; // Variable Declaration
	for( int i = 0 ; i < inter ; i++ ){
		int Count = 10;                       // Variable lifting
		Power = pow( Count, i );              // lifting 10^i
		Value2 = 9 * Power;                   // value keep 9*power   
		Value += Value2;                      // Value keep Value + Value2
		Sum += Value;                         // sum Value
		if( Value <= 9 ){
			printf( "Series = %.0f", Value ); // Output Series
		}else if( Value > 9 ){
			printf( " + %.0f", Value );       // Output Series
		}//end if
}//end for
	printf( "\nSum = %.0f", Sum );            // Output Sum Series
}//end forlooper function

/* ---| Function Processing |---  */

int main(){
	int inputint;                    // Variable input
	
	/* ---| Input Section |--- */
	
	printf( "User Input : " );		 // output message
	scanf( "%d", &inputint );        // collect value from user
	printf( "\n------------------------------\n" );
	
	/* ---| Output Section |--- */
	forlooper( inputint );           // Function forlooper Processing
	printf( "\n------------------------------\n");
	printf( "\nEnter to exit : " );
	getch();
	return 0;
}//end main function
