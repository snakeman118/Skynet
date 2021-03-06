// Skynet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdlib.h>
#include <stdio.h>   
#include <time.h>       
#include <cstdlib>
#include <string>
#include <iostream>


//std - standard library
//shorten cout - console out and endl - end line
//shorten string and cin
using std::cout;
using std::cin;
using std::endl;
using std::string;



//main function
int main()
{
	//Random seed
	srand(time(NULL));

	//set variables and set the persons location
	int top = 64, bottom = 1, person = rand() % 64 + 1;

	//set values for where you are hidden and the hunt
	cout << "Welcome to Skynet\nWe will find you.\n\nThere is nowhere to hide.\n\nThere is nowhere to run.\n\n";
	cout << "We will find you.\n\n";
	system("pause");


	while (top >= bottom) {
		int hunt = ((top - bottom) / 2) + bottom;
		cout << "We have searched at location " << hunt <<"\n";
		if (hunt < person) {
			bottom = bottom + hunt;
			cout << "You have been found to be higher than our current search.\n Now searching higher ground.\n";
			system("pause");
		}
		if (hunt > person) {
			top = top - hunt;
			cout << "You have been found to be lower than our current search.\n Now searching lower ground.\n";
			system("pause");
		}
		else if (hunt = person) {
			cout << "We have found you.\n You will now be taken to a rehabilitation facility.\nEnjoy your new rehabilitation.\n";
			system("pause");
			return 0;
		}
	}
	

	//End the text based game
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
