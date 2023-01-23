#include <stdio.h>

#include "test.h"

// #define DEBUG

void sort(int *list, int size)
{
	for(int i = 1; i < size; i++)
	{
		int memory = list[i];

		int insertAt = 0;

		for(insertAt = i; insertAt > 0 && memory < list[insertAt - 1]; insertAt--)
		{
			list[insertAt] = list[insertAt - 1];

			#ifdef DEBUG
				printf(">%d\n", insertAt);
			#endif
		}

		list[insertAt] = memory;
	}
}