//CharCompareTest.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char arr[] = {'Z','K','k','r','e','z','u','i','y','b','9','a','2','0'};
	char smallest = 'z';
	for(int i = 0; i < 20; i++)
	{
		if(smallest > arr[i])
		{
			smallest = arr[i];
			cout << smallest << "\n";
		}
		else
		{
			cout << smallest << "\n";
		}
	}


//result 
	/*
	k k e e e e e b 9 9 2 0

	therfore, small case is the largest(greater) set by alphabetically 
	and capital case is smaller and integer as char is the smallest case
	*/

	return 0;
}