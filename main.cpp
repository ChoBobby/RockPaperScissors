#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char user, comp{};
	int randNum;

	srand(time(0));
	randNum = rand() % 3 + 1;

	if (randNum == 1) {
		comp = 'R';
	}
	else if (randNum == 2) {
		comp = 'P';
	}
	else if (randNum == 3) {
		comp = 'S';
	}

	cout << "Enter R, P, or S: ";
	cin >> user;

	cout << endl << "You chose: " << user << endl;
	cout << "Opponent chose: " << comp << endl << endl;
	cout << "Game results: ";

	if ((user == 'R') || (user == 'r')) {
		if (comp == 'R')
			cout << "Tie!";
		else if (comp == 'P')
			cout << "You lose!";
		else
			cout << "You win!";
	}
	else if ((user == 'P') || (user == 'p')) {
		if (comp == 'R')
			cout << "You win!";
		else if (comp == 'P')
			cout << "Tie!";
		else
			cout << "You lose!";
	}
	else if ((user == 'S') || (user == 's')) {
		if (comp == 'R')
			cout << "You lose!";
		else if (comp == 'P')
			cout << "You win!";
		else
			cout << "Tie!";
	}
	else {
		cout << "Error.";
	}

	cout << endl;

	return 0;
}