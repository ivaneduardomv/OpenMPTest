#include <stdlib.h>
#include <stdio.h>

#define ARRAY_LENGTH 32

int unsortedData[ARRAY_LENGTH] = {6,65,82,4,336,8,2,8964,18,5,8516,7,4,82,77,16,4,8976,71,54,76,51,564,8974,1,4,7,989,32,165,46,574};

void bubbleSort(int *pIntArray, const int arrayLength);
void printArray(int *pIntArray, const int arrayLength);

int main(int argc, char const *argv[])
{
	puts("Welcome!");
	puts("Sorting array...");
	bubbleSort(unsortedData, ARRAY_LENGTH);

	puts("Array has been sorted!");
	printArray(unsortedData, ARRAY_LENGTH);

	puts("Finished!");
	return 0;
}

void bubbleSort(int *pIntArray, const int arrayLength)
{
	int tmp;
	for(int i = 1; i < arrayLength; ++i)
	{
		for(int j = 0; j < arrayLength-1; ++j)
		{
			if(pIntArray[j] > pIntArray[j+1])
			{
				tmp = pIntArray[j+1];
				pIntArray[j+1] = pIntArray[j];
				pIntArray[j] = tmp;
			}
		}
		
	}
}

void printArray(int *pIntArray, const int arrayLength)
{
	for(int i = 0; i<arrayLength; ++i)
	{
		printf("%d\n",pIntArray[i]);
	}
	puts("");
}
