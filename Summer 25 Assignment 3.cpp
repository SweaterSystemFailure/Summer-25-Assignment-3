#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to this menu!" << endl;
	bool exitLoop = false;
	do {
		int userSelection;
		cout << "Would you like to: " << endl;
		cout << "1. Add an item." << endl;
		cout << "2. View items." << endl;
		cout << "3. Exit" << endl;
		cout << "Please make your selection: " << endl;
		cin >> userSelection;

		switch (userSelection) {
		case 1:
			cout << "Item added!" << endl;
			cout << endl;
			break;
		case 2:
			cout << "Displaying Items..." << endl;
			cout << endl;
			break;
		case 3:
			cout << "Exiting...";
			cout << endl;
			exitLoop = true;
			break;
		default:
			cout << "It looks like something went wrong. Let's try again." << endl;
			cout << endl;
		}
	} while (exitLoop == false);

	return 0;
}
