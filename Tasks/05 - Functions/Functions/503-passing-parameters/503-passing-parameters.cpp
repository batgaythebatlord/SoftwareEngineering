#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayWithinBanner(string passedMessage)
{
	int L = passedMessage.length();
	
	//Write the banner above
	displayBanner(L);

	cout << "* ";				//Leading *
	cout << passedMessage;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(L);
}

int main()
{
	const string message = "Welcome to Computer Science";

	displayWithinBanner(message);
	

	//Tell the calling shell all is well
	return 0;
}