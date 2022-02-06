#include <ctime>
#include <stdio.h>

long double f(long double x)
{
	return x * x;
}

int main(int argc, char* argv[])
{
	clock_t start, finish;
	unsigned int i, n = 1000000000;
	long double from = 0, to = 1000, dx = (to - from) / n, x = 0.5 * dx, sum = 0;
	start = clock();
	for (i = 0; i < n; i++)
	{
		sum += f(x) * dx;
		x += dx;
	}
	finish = clock();
	printf("Sum: %Lf\r\n", sum);
	printf("Elapsed time: %Lf\r\n", ((long double)finish - start) / CLOCKS_PER_SEC);
	return 0;
}
