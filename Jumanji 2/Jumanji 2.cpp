// JUMANJI.cpp : Defines the entry point for the console application.
// Lost Fortune
// A personalized adventure

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{ 
	/*GOLD_PIECES is a constat that stores the number of
	gold pieces in the fortune the adventerers seek.
	*/
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to JUMANI\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of a way to return from the game Jumanji. ";
	cout << "The group was led by, " << leader << "whom was stuck as Smolder Bravestone Avatar.\n";
	cout << "\nAlong the ways, a group of hippos ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the hippos were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were deleted, ";
	cout << "leaving just " << survivors << " in the group.\n";
	cout << "\nThe party was about to give up all hope of leaving.";
	cout << "But while collecting there prize for defeating the hippos, ";
	cout << "they stumbled upon the end of the game. ";
	cout << "As the adventurers headed towards the exit, ";
	cout << "they split up " << GOLD_PIECES << " gold pieces. ";
	//the book said to use % but that didnt work so i used /
	cout << leader << " held on to the extra " << (GOLD_PIECES / survivors);
	cout << " pieces in hopes to give it to the families of the deceased.\n";
	system("pause");
	return 0;
}