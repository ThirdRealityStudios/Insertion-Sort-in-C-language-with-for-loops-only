#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "insertion.h"

#define DIGITS_PRINTED 5
#define MAX_RAND 1000

void print(int *list, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("[%*d]", DIGITS_PRINTED, list[i]);
	}

	puts("");
}

int* create(int size)
{
	return calloc(size, sizeof(int));
}

void randomizeList(int *list, int size)
{
	srand(time(NULL));

	for(int i = 0; i < size; i++)
	{
		list[i] = rand() % MAX_RAND;
	}
}

void test(int size)
{
	int *list = create(size);

	randomizeList(list, size);

	puts("\nCreated list:");
	print(list, size);
	puts("");

	sort(list, size);

	puts("Sorted list:");
	print(list, size);
	puts("");
}