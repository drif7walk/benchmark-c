/*
	Benchmarking in C by GH0ST
*/

#include <stdio.h>

#include <time.h>
int main(void)
{
	int i = 0;
	printf("Clock started.\r\n");
	clock_t start = clock();
	for (i=i; i < 100000; i++) {} // Do task
	clock_t end = clock();

	double time_took = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Clock done. Execution took %lf seconds.\r\n", time_took);
}
