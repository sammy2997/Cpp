// Samuel Adama
// November 6 2018
// Geometry.cpp
// This program, if the user enters 1, will ask for the radius of a circle and 
	//then display its area. If the user enters 2, the program will ask for the 
	//length and width of the rectangle, and then diplay the rectangle's area. 
	//If the user enters 3, the program will ask for the length of the 
	//triangle's base and height, and then display its area. If the user enters
	//4, the program will end

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int userChoice;					// The users choice from the menu
	double 	radius,					// Radius of the circle
			circleArea,				// The area of the circle
			length,					// The length of the rectangle
			width,					// The width of the rectangle
			rectangleArea,			// The area of the rectangle
			base,					// The base of the triangle
			height,					// The height of the triangle
			triangleArea;			// The area of the triangle
	const double pi = 3.14159;		// The value for pi
	
	
	//welcome
	cout << "This program, if the user enters 1, will ask for the radius of a";
	cout << " circle and then display its area. If the user enters 2,the";
	cout << " program will ask for the length and width of the rectangle, and"; 
	cout << " then display the its area. If the user enters 3, the";
	cout << " program will ask for the length of the triangle's base and";
	cout << " height, and then display its area. If the user enters 4, the"; 
	cout << " program will end." << endl << endl;
	cout << "Geometry Calculator" << endl << endl;
	
	do
	{
	
	//display the menu
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl << endl;
	cin >> userChoice;


	//get input from user and calculate the area of a circle
	if (userChoice == 1)
	{
		do 			//prevent negative numbers
		{
		
		//get the radius
		cout << endl << "Enter the radius: ";
		cin >> radius;
		if (radius < 0)
		cout << "Please enter a positive value.";
	} while (radius < 0);
	
		//calculate the area
		circleArea = pi * pow(radius, 2);
		
		// display the area
		
		cout << "The area is " << setprecision(4) << circleArea << endl;
		
	}
	
	//get input from user and calculate the area of a rectangle
	if (userChoice == 2)
	{
		do			//prevent negative numbers
		{
		
		//get length and width
		cout << endl << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
		if (length < 0 || width < 0)
		cout << "Please enter a positive value.";
	} while (length < 0 || width < 0);
		//calculate the area
		rectangleArea = length * width;
		
		//display the area
		cout << "The area is " << rectangleArea << endl;
	}
	
	//get input from the user and calculate the area of a triangle
	if (userChoice == 3)
	{
		do 			//prevent negative numbers
		{
		
		//get base and height
		cout << endl << "Enter the base: ";
		cin >> base;
		cout << "Enter the height: ";
		cin >> height;
		if (base < 0 || height < 0)
		cout << "Please enter a positive value.";
	} while (base < 0 || height < 0);
		//calculate the area
		triangleArea = (base * height)/ 2;
		
		//display the area
		cout << "The area is "<< triangleArea << endl;
	}
	
	//quit
	if (userChoice == 4)
	{
		cout << endl << "If you want to quit please press enter again.";
		return 0;
	}
	
	//user enters anything but 1, 2, 3, or 4
	if (userChoice > 4 || userChoice <= 0)
	cout << endl << "Please enter 1, 2, 3, or 4" << endl << endl;
} while (userChoice > 4 || userChoice <= 0);
	
	return 0;
	

}
