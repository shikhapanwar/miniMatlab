#include "myl.h"

int main()
{
	int n;
	float f ;
	char *str = "Input a Integer no. \n \0";
	printStr(str);
	
	
	
	readInt(&n);
	printInt(n);
	char *str2 = "Input a floating no. \n \0";
	printStr(str2);

	readFlt(&f);
	printFlt(f);
}