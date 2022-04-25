#include "Header.h"
#include <iostream>

using namespace Gambling;
using namespace std;

//Returns a int of 1-6
int Casino::rollDie() {
	return rand() % 6 + 1;
}
//Returns a 50/50 coin flip of Heads or Tails
int Casino::flipCoin() {
	int coin = rand() % 2 + 1;
	if (coin == 1) {
		return 1;
	}
	else if (coin == 2) {
		return 2;
	}
	return 3;
}
//Chooses between rolling a die and flipping a coin
void Casino::Gamble() {
	int input = 0,dieValue = 0,coin = 0;

	cout << "Do you want to:\n1-Roll a Die\n2-Flip a Coin" << endl;
	cin >> input;

	if (input == 1) {
		cout << "\nChoose a value between 1-6";
		cin >> input;//Gets input

		//Rolls Die
		dieValue = rollDie();

		if (dieValue == input) {
			cout << "You Guessed Correctly" << endl;
			return;
		}
		cout << "You Guessed " << input << " it was " << dieValue << endl;
	}
	else if (input == 2) {
		cout << "\nChoose a side\n1-Heads\n2-Tails";
		cin >> input;//Gets input

		//Flips Coin
		coin = flipCoin();

		if (coin == input) {//Compares Coin and player guess
			cout << "You Guessed Correctly" << endl;
			return;

		} else if (coin == input) {
			cout << "You Guessed Correctly" << endl;
			return;
		}
		cout << "You Guessed " << input <<" it was " << coin << endl;
	}
	cout << "You didn't Guess Correctly\n" << endl;
}
