// Samuel Adama
// 1/20/2019
// distance.cpp
// This program will ask the user for the speed of a vehicle(in mph)
// and how many hours it has traveled. It will then use a loop to display the 
// the total distance traveled at the end of each hour of that time peroid.

#include <iostream>
#include <iomanip>
using namespace std;

int Distance(int hours, int mph);

int main()
{
	int mph;		// User inputed miles per hour
	int hours;		// User inputed hours traveled
	
	// Welcome
	cout << "This program will ask the user for the speed of a vehicle(mph)";
	cout << " and how many hours it has traveled. It will then display the";
	cout << " total distance traveled at the end of each hour of the inputed";
	cout << " time period." << endl;
	
	// Ask for speed of vehicle with input validation
	do
	{
	cout << endl << "What is the speed of the vehicle(in mph): ";
	cin >> mph;
	if (mph < 0)
		cout << "Please enter a positive value." << endl;
	} while (mph < 0);
	
	// Ask how many hours it has traveled with input validation
	do
	{
	cout << endl << "How many hours has it traveled: " ;
	cin >> hours;
	if (hours < 0)
		cout << "Please enter a positive value." << endl;
	} while (hours < 0);
	
	// Display the total distance travaled 
	cout << endl << endl << "  Hour        Miles Traveled" << endl;
	cout << "--------------------------------" << endl;
	
	for (int n = 1; n <= hours; n++)
		cout << setw(3) << n << setw(18) << Distance(n, mph) << endl;
	
	return 0;
}

int Distance(int hours, int mph)
{
	int answer = hours * mph;

	return answer;
}
