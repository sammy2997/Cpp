// Samuel Adama
// 1-17-2019
// ToPennies.cpp
// Test a ToPennies function that converts dollars and pennies to pennies.


#include <iostream>
using namespace std;

int toPennies(int dollars, int pennies);

int main( int argc, char *argv[])
{
	int dollars;
	int pennies;
	
	for (int i = 0; i < argc; i++)
		cout << argv[i] << endl;
		
	cout << "Enter number of dollars: ";
	cin >> dollars;
	do
	{
		cout << "Enter number of pennies: ";
		cin >> pennies;
		if (pennies < 0)
			cout << "Pennies can't be negative! Try again.\n";
	} while (pennies < 0);
	
	cout << toPennies(dollars, pennies) << endl;
	return 0;
}

// Function: toPennies
// Task: convert dollars and pennies into an equivalent amount of 
// 		 just pennies which is returned.
// Input: two integers as parameters which represent the number of
//		  dollars and the number of pennies
// Output: one integer respresenting the number of pennies is returned.

int toPennies(int dollars, int pennies)
{
	return dollars * 100 + pennies;
}

