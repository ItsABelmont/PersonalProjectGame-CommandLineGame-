#include <iostream>

using std::cout;

int main()
{

	bool gameLoop = true;
	bool validInput = false;
	int choice;

	do {
		
		cout << "****************\n";
		cout << "1. Start Game\n";
		cout << "2. Load Game\n";
		cout << "3. Exit\n";
		cout << "****************\n";

		cout << "Enter: ";
		std::cin >> choice;

		//checks for valid user input
		if (std::cin.fail()) {
			cout << "Invalid input! Please input a integer.\n";
			//clear bad input and ignore remaining
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		}

		if (choice == 3)
			gameLoop = false;

	} while (gameLoop);

	cout << "Goodbye!";

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
