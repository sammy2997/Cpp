// Samuel Adama
// September 21, 2018
// Box.cpp
// This program will be used to calculate
// the volume and surface area of a box

#include <iostream>

using namespace std;

int main()
{
// Get the dimensions of the box
	int length;        // the length of the box inputed by user
	int width;         // the width inputed by user
	int height;        // the height inputed by user
	int surfacearea;   // the surface area of the box calculated
	int volume;        // the volume of the box calculated
	
// Get the length of the box
	cout << " what is the length of the box? :";
	cin  >> length;
	
// Get the width of the box
	cout << " what is the width of the box?  :";
	cin  >> width;
	
// Get the height of the box
	cout << " what is the height of the box? :";
	cin  >> height; 
	
// calculate the volume of the box
	volume = length * height * width;
	
// calculate the Surface Area of the box
	surfacearea = 2 * length * width + 2  * length * height + 2 * width * height;
	
// Space for the displays
	cout<< "----------------------------------" <<endl;
	
// Display the Volume
	cout << " the Volume of the box is       :" << volume << endl;
	cout << " the surface area of the box is :" << surfacearea << endl;
	
	return 0;
}
