// Problem5-1-1_MaximumOfIntegers.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning( disable : 4996 )


int main()
{
	int integer;
	int maximum;
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &integer);
		if (i == 0)
		{
			maximum = integer;
		}
		else
		{
			if (maximum < integer)
			{
				maximum = integer;
			}
		}
	}
	printf("%d", maximum);
	return 0;
}

