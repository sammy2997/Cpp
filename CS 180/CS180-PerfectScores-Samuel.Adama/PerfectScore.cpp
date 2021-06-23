// Samuel Adama
// 28/03/19
// PerfectScore.cpp
// This program uses function countPerfect to
// count and return how many perfect 100 scores 
// were entered.

#include<iostream>
#include<iomanip>

using namespace std;

// Function prototype
int countPerfect(int array[], int number);

int main()
{
	const int NUM_SCORES = 20;
	int scores[NUM_SCORES], perfect = 100;

	cout << "Enter 20 test scores from 1 - 100: "<< endl;

	for (int perfect = 0; perfect < NUM_SCORES; perfect++)
	{
		cin >> scores[perfect];
	}

	perfect=countPerfect(scores, NUM_SCORES);
	
	cout << "You entered " << perfect << " Perfect Scores!" << endl;

	return 0;
}


int countPerfect(int array[], int number)
{
	int perfScore = 0;

	for (int count = 0; count < number; count++)
	{
		if (array[count] == 100)
		perfScore++;
	}	
	
	return perfScore;
}

