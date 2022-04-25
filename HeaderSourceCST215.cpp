// HeaderSourceCST215.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Header.h"

using namespace Gambling;
using namespace std;


int main()
{
	Casino h;

	bool isRunning = true;
	int input;

	srand(time(NULL));

	while (isRunning) {
		cout << "\n\nTry and win a game between the two" << endl;
		h.Gamble();

		cout << "1-Exit\nAny Other Button to Play Again" << endl;
		cin >> input;
		if (input == 1) {
			isRunning = false;
		}
	}
	cout << "Thanks for Playing!\nCome Again Sometime." << endl;
}