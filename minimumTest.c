#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
	omp_set_num_threads(4);

	#pragma omp parallel
	{
		printf("Printing from thread #%d\n",omp_get_thread_num());
	}

	return 0;
}
