#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	omp_set_num_threads(4);

	#pragma omp parallel for
	for(int i = 0; i < 32; ++i)
	{
		printf("Thread #%d is working. i = %d\n", omp_get_thread_num(), i);
	}
	printf("Thread #%d is working.\n", omp_get_thread_num());
	return 0;
}
