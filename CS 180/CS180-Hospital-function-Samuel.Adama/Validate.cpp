#include <iostream>
#include "Hospital.h"
using namespace std;


double Validate(string prompt)
{
	double num;
	
    do
	{
		cout << prompt;
	    cin >> num;
	    if (num < 0)
	        cout << "ERROR! You can't enter negative numbers. Try again." << endl;
	} while (num < 0);
	
	return num;
}
