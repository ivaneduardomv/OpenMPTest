#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	int x = 1990;
	omp_set_num_threads(4);

	#pragma omp parallel
	{
		//printf("Thread #%d is working...\n", omp_get_thread_num());
		x++;
		//printf("Thread #%d work is done!\n", omp_get_thread_num());
	}

	printf("x = %d\n",x);
	return 0;
}
