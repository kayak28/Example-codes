//switchByChar.cpp
#include <iostream>
using namespace std;

int main()
{
	char input;
	do
	{
		cout << "Enter \n a for adding new code" << "\n";
		cout << "d for deleting existing node by ssn\n";
		cout << "y for deleting ith node\n";
		cout << "q for quit\n";
		cout << "Enter: \n";
		cin >> input;

		switch(input)
		{
			case 'a':
			case 'A':
				cout << "adding!\n";
				break;
			case 'd':
			case 'D':
				cout << "Deleting a node!\n";
				break;
			case 'y':
			case 'Y': 
				cout << "Delete i-th node\n";
				break;
			case 'q':
			case 'Q':
				cout << "Thank you!\n";
				break;
			default:
				cout << "invalid\n";
		}//switch
		cout << "\n\n";
	}while(!((input == 'q')||(input == 'Q')));

	return 0;
}