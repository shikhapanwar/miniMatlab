#include "myl.h"
#include <stdio.h>
using namespace std;

int main()
{
    int v,e; 
    float f;                                                 
    int number_bytes;    
   // printf("chek;[e\n");                                   
    printStr("Enter a integer: ");

    // -------------------------------------------------------------
    e = readInt(&v);                                      
   //	printInt(e);  // not printing e
    printf("%d\n", e);
   	printStr("\n");

   	e = readInt(&v);
   	printInt(e);
   	printStr("\n");
   	number_bytes = printInt(v);
   	printStr("\n");
    printStr("printIntng this integer required "); 
    printInt(number_bytes);
    printStr(" characters to be printed\n\n");                

	printf("checking ok");
   	printf("%d", readInt(&v));
   	printInt(e);
   	printStr("\n");
   	printInt(v);
   	printStr("\n");

   	// -------------------------------------------------------
    e = readFlt(&f);                                      
   	printInt(e);
   	printStr("\n");

   	e = readFlt(&f);
   	printInt(e);
   	printStr("\n");
   	number_bytes = printFlt(f);
   	printStr("\n");
    printStr("printIntng this float required "); 
    printInt(number_bytes);
    printStr(" characters to be printed\n\n");                

   	e = readFlt(&f);
   	printInt(e);
   	printStr("\n");
   	printFlt(f);
   	printStr("\n");
    
    
    return 0;
}
