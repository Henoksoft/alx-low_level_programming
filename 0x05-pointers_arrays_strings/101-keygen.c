#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
