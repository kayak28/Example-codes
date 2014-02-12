
#include <stdio.h>
#include <stdlib.h>

int getRnadom(int min, int max);

int main()
{
	int i;
	for(i = 0; i<10; i++)
	{
		printf("%d \n",getRnadom(1,6));
	}
	return 0;
}
int getRnadom(int min, int max)
{
	return min + (int)(rand()*(max-min+1.0)/1.0+RAND_MAX);
}