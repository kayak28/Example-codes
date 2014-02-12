//RandEx.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//cout << "Welcome1";
	int iSecret;
	int iGuess;
	//srand(time(NULL));

	iSecret = (rand() % 10 + 1) ;
	printf("iSecret = %d", iSecret);

	do{
		printf("Guess the num(1 to 10)\n");
		scanf( "%d", &iGuess);
		if(iSecret < iGuess) 
		{	
			puts("the secret num is lower");
		}
		else if (iSecret > iGuess)
		{
			puts("the secret num is higher");
		}
		else
		{
			puts("exception");
		}
	}while(iSecret != iGuess);

	puts("Congratulations!!!!");
	return 0;
}