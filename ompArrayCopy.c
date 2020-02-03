#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

#define ARRAY_LENGTH 1024

int main(int argc, char const *argv[])
{
	puts("Welcome!");

	puts("Filling array...");
	unsigned long int arr[ARRAY_LENGTH] = {0};
	for(unsigned long int i = 0; i < ARRAY_LENGTH; ++i) arr[i] = i;
	puts("Array filled!");

	puts("Coping array...");
	unsigned long int newArray[ARRAY_LENGTH] = {0};
	omp_set_num_threads(4);
	#pragma omp parallel for
	for(unsigned long int i = 0; i < ARRAY_LENGTH; ++i) newArray[i] = arr[i];
	puts("array copied!");

	puts("Displaing array...");
	for(unsigned long int i = 0; i<ARRAY_LENGTH; ++i) printf("arr[%li] = %li -> newArray[%li] = %li\n",i,arr[i],i,newArray[i]);

	puts("Program finished!");
	return 0;
}
