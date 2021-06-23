// Samuel Adama	
// October 28, 2018
// tutor2.cpp
// This program will display two random number between 0 and 30, and will wait 
// for the user to answer. If they are wrong, they will be given one more chance
// to answer the problem. The program will then tell them they are now right or 
// let them know if they are wrong and give them the correct answer.
	
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int LOW = 0;
const int HIGH = 30;

int main()
{
	int firstnum,
		secondnum,
		UserAnswer,
		RightAnswer;
	time_t seconds;
	
	// Seed the random number generator with the current time
	time(&seconds);
	srand(seconds);
	
	// Welcome
	cout << "This program will generate two random values between 0 and 30, ";
	cout << "and will wait for the user to enter an answer." << endl;
	cout << "If the user is wrong, they will be given one more chance to ";
	cout << "answer the problem." << endl;
	cout << "The program will either tell them if they are now right or let them ";
	cout << "know if they are wrong by showing" << endl;
	cout << "them the correct answer." << endl;
	cout << "input answer to problem below: " << endl;
	
	// Generate the first random number
	firstnum = rand() % (HIGH - LOW + 1) + LOW;
	
	// Generate the second random number
	secondnum = rand() % (HIGH - LOW + 1) + LOW;
	
	// display the first random number 
	cout << setw(5) << firstnum << endl;
	
	// Display the second random number (the numbers weren't lining up based on
		// if it was a single or double digit numberso I put in an if/else statment 
		// statment to make sure that they did
	if (secondnum < 10)
		cout << setw(4) <<" + " << secondnum << endl;
	else
		cout << setw(3) << " + " << secondnum << endl;
	cout << "-----" << endl;
	
	// wait for the user to enter a number
	cout << "   ";
	cin >> UserAnswer;
	
	// Calculate answer
	RightAnswer = firstnum + secondnum;
	
	// If the user is right congratulate them
	if (UserAnswer == RightAnswer)
		cout << "Congrats you are right, the answer is " << RightAnswer;

	// If the user is wrong display the problem again for a second chance and 
		// give them the right answer
	 else if (UserAnswer != RightAnswer)
	{	
		//Display the problem again 
		cout << endl << "Try again";
		cout << endl << setw(5) << firstnum << endl;
		if (secondnum < 10)
			cout << setw(4) <<" + " << secondnum << endl;
		else
			cout << setw(3) << " + " << secondnum << endl;
	
		cout << "-----" << endl;
		cout << "   ";
		cin >> UserAnswer;
		if (UserAnswer == RightAnswer)
			cout << "Congrats you are right, the answer is " << RightAnswer;
		else if (UserAnswer != RightAnswer)
			cout << "Sorry you are wrong, the answer is " << RightAnswer;
	}
	
	std::cout << "Press ENTER to continue...";
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	return 0;
}

