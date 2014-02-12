//Kitty.cpp
#include <iostream>
using namespace std;

class Kitty
{
	public:
		char *str;
	//Kitty(arguments);
	//~Kitty();

	/* data */
} obj;

int main()
{
	obj.str = "Di_Gi_Gharat";
	Kitty *po = &obj;
	po->str = "Kitty on your lap";
	//access from pointer po to member valiable 
	//substitude string from the pointer,
	// so the last output is "Kitty on your lap"
	cout << obj.str << "\n";
	return 0;
}
