// Author: Samuel
// Date: 9/10/2018	
// File: area.cpp
// Print the area of a rectangle whose length and width are entered by the user

#include <iostream>

using namespace std;

int main()
{
	int length;    // length of the rectangle entered by the user
	int width;     // width of the rectangle entered by the user
	int area;     // area of the rectangle
	
	// get the length
	cout << "Enter the length of the rectangle: ";	
	cin>> length;
	
    // get the width
	cout << "Enter the width of the rectangle: ";
	cin >> width
	
	// calculate the area of the rectangle
	;area = length * width;
	
	// display the area of the rectangle
	cout  <<  "The area of the rectangle is  "  <<  area  <<  endl;

	return 0;
;}

