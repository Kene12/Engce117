//////////////////////////////////////////////
//  Panithan Kunkaew 65543206069-8 sec 3    //
//      https://youtu.be/32y1vtqRh1I        //
/////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

struct testNode{
    int number;
    struct testNode *next;
};// testNode keep data

struct testNode *AddNode( struct testNode **startNode, int a );
void ShowAll( struct testNode *startNode );
void ShowBack( struct testNode *startNode );
void Update( struct testNode **startNode, int number , int change );
void SwapNode( struct testNode *startNode, int number1, int number2 );


void UpdateFunction(){
	struct testNode *start, *now;
	int nodenow, nodech;
    start = NULL;
    printf( "1. Update Function \n" );
    AddNode( &start, 10 );
	AddNode( &start, 20 );
	AddNode( &start, 30 );
	AddNode( &start, 40 );
	ShowAll(start);
    printf("\n");
    printf("Select the data to change : ");
    scanf("%d %d", &nodenow, &nodech);
    Update( &start, nodenow, nodech );
    ShowAll(start);
    printf("\n");
}// End Output UpdateFunction

void ShowBackFunction(){
	struct testNode *start, *now;
    start = NULL;
    printf( "2. ShowBack Function \n" );
	AddNode( &start, 10 );
    AddNode( &start, 20 );
    AddNode( &start, 30 );
    AddNode( &start, 40 );
    ShowAll( start );
    printf( "\n" );
    ShowBack( start );
    printf( "\n" );
}// End Output showbackfunction

void SwapNodeFunction(){
	struct testNode *start, *now;
	int nodenow, nodech;
    start = NULL;
    printf( "3. SwapNode Function \n" );
	AddNode( &start, 10 );
    AddNode( &start, 20 );
    AddNode( &start, 30 );
    AddNode( &start, 40 );
    ShowAll( start );
    printf( "\n" );
    printf( "Select the node to swap : " );
    scanf( "%d %d", &nodenow, &nodech );
    SwapNode( start, nodenow, nodech );
    ShowAll( start );
    printf( "\n" );
}// End Output SwapNodeFunction

int main(){
    UpdateFunction();
    printf( "---------------------------------------\n" );
    ////////////////////////////////////////////////////
    ShowBackFunction();
    printf( "---------------------------------------\n" );
    ////////////////////////////////////////////////////
    SwapNodeFunction();
    ////////////////////////////////////////////////////
    return 0;
} // End function main

struct testNode *AddNode( struct testNode **startNode, int a ){
    while( *startNode != NULL ){
		startNode = &(*startNode)->next;
    } // End while loop walk node starnode to last node
	*startNode = new struct testNode;
	(*startNode)->number = a ;
	(*startNode)->next = NULL ;
} // End function NewNode in testNode

void ShowAll( struct testNode *startNode ){
    while ( startNode != NULL ){
        printf( "%d ", startNode->number );
        startNode = startNode->next;
    } // End while loop Select starnode to last node
    printf(" ");
} // End function show data in Allnode

void Update( struct testNode **startNode, int number , int change ) {
	struct testNode *goNode = *startNode;
	while ( goNode != NULL ){
		if( goNode->number == number ){
			goNode->number = change;
			break;
		} // End if check Nuber in node is number Select to change
		goNode = goNode->next;
	} // End while loop Select starnode to last node
}// End function Update Number in Node

void ShowBack( struct testNode *startNode ){
    struct testNode *nownode = startNode;
    struct testNode *prev = NULL;
    struct testNode *next = NULL;
    struct testNode *out = NULL;
    while( nownode != NULL ){
        next = nownode->next;
        nownode->next = prev;
        prev = nownode;
        nownode = next;
    } // End while loop Select starnode to last node and Change the pointing of a node
    startNode = prev;
    ShowAll( startNode );
} // End function ReverseShow node

void SwapNode( struct testNode *startNode, int numberSwap1, int numberSwap2 ){
    struct testNode *nodeSwap1 = NULL;
    struct testNode *nodeSwap2 = NULL;
    struct testNode *tempNode = startNode;
    while( tempNode != NULL ){
        if( tempNode->number == numberSwap1 ){
        	nodeSwap1 = tempNode;
		}// End if check number in nodenow is number1 to swap
        else if( tempNode->number == numberSwap2 ){
        	nodeSwap2 = tempNode;
		}// End if check number in nodenow is number2 to swap
        if( nodeSwap1 != NULL && nodeSwap2 != NULL ){
        	break;
		}// End if check number1 and number2 is not NULL go to break loop while
        tempNode = tempNode->next;
    }// End while loop Select starnode to last node
    if( nodeSwap1 != NULL && nodeSwap2 != NULL ){
        int tempNum = nodeSwap1->number;
        nodeSwap1->number = nodeSwap2->number;
        nodeSwap2->number = tempNum;
    }// End if check number1 and number2 is not NULL go to swap
}// End function swap node



