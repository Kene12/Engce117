#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
 struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **startNode, char n[], int a, char s, float g ){
	struct studentNode *temp = NULL;
	while( *startNode != NULL ){
		temp = *startNode;
		startNode = &(*startNode)->next;
	}// end while
	*startNode = new struct studentNode;
	strcpy((*startNode)->name, n);
    (*startNode)->age = a;
    (*startNode)->sex = s;
    (*startNode)->gpa = g;
    (*startNode)->next = NULL;
    (*startNode)->back = temp;
    return *startNode;
} // end function	

void InsNode( struct studentNode *preNode, char n[], int a, char s, float g ){
	preNode->back->next = new struct studentNode;
	strcpy(preNode->back->next->name, n);
	preNode->back->next->age = a;
	preNode->back->next->sex = s;
	preNode->back->next->gpa = g;
	preNode->back->next->next = preNode;
	preNode->back->next->back = preNode->back;
	preNode->back = preNode->back->next;
} // end function

void GoBack( struct studentNode **preNode ) {
  *preNode = (*preNode)->back;
} //end function

void DelNode( struct studentNode *preNode ){
	struct studentNode *temp;
	preNode->back->next = preNode->next;
	if( preNode->next != NULL ){
		preNode->next->back = preNode->back;
		temp = preNode->next;
	}else{
		temp = preNode->back;
	}
	delete preNode;
	preNode = temp;
}//end function

int main() {
 struct studentNode *start, *now ;
 start = NULL ;
 now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
 printf("\n");
 now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
 printf("\n");
 InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
 printf("\n");
 InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
 printf("\n");
 GoBack(&now) ;
 DelNode( now ) ; ShowAll( start ) ;
 DelNode( now ) ; ShowAll( start ) ;
 DelNode( now ) ; ShowAll( start ) ;
 return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
 while( walk != NULL ) {
  printf( "%s ", walk->name ) ;
  walk = walk->next ;
 }//end while
 printf( " " ) ;
}//end function
