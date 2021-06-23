// Samuel Adama
// 21st October 2018
// tutor.cpp
// This program will display two random number betyween 1 and 9, then will add
// and display the answer after the user has entered their answer
	
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

const int LOW = 1;
const int HIGH = 9;

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
	cout << "This program will generate two random values between 1 and 9, and";
	cout << " will give the answer after the user enters his answer." << endl;
	cout << "Input answer in two digit form. (Ex. 04)" << endl;
	
	// Generate the first random number
	firstnum = rand() % (HIGH - LOW + 1) + LOW;
	
	// Generate the second random number
	secondnum = rand() % (HIGH - LOW + 1) + LOW;
	
	// Display the random numbers
	// display the first random number 
	cout << setw(4) << firstnum << endl;
	
	// Display the second random number
	cout << setw(3) << "+ " << secondnum << endl;
	cout << "------" << endl;
	
	// wait for the user to enter a number
	cout << "  ";
	cin >> UserAnswer;
	
	// Calculate answer
	RightAnswer = firstnum + secondnum;
	
	// Display answer
	cout << "The right answer is " << RightAnswer;
	
	return 0;
}

