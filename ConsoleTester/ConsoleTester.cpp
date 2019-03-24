// Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyDll.h"

int main()
{
	printf("Hello World!\n");

	int a = 10;
	int b = 5;
	printf("jAdd %d\n", jAdd(a, b));
	printf("jSub %d\n", jSub(a, b));
	getchar();

	return 0;
}
