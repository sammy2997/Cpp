#include <iostream>
#include "Hospital.h"

using namespace std;

// Driver to test the validateInput function
int main()
{

	cout << "The current temperature is: " << validateInput("Enter the current temperature: ");
		
	return 0;
}

double validateInput(string prompt)
{
	double num;
	
	do 
	{
		cout << prompt;
		cin >> num;
		if (num < 0)
			cout << "You can't enter a negative value!!\n";
	} while (num < 0);	
	return num;
}
