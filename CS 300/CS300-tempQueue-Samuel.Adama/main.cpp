// Samuel Adama
// 28th October 2019
// Professor Erik Sand
// main.cpp
// This will test to see if you can dynamically acquire varbles of different kinds.
// This code is modelled after the pr18-01.cpp file from chapter 18
// Received assistance from Sean Loken

#include <iostream>
#include "queue.h"
#include <string>

using namespace std;

int main()
{
	int size; //initialising number user wants to enter
	
	int a; //initalising integer values
	double b; //initalising double values
	string c; //initalising string values
	
	DynQueue<int> intQueue; //creating dynamic queue for integers
	DynQueue<double> doubleQueue; //creating dynamic queue for doubles
	DynQueue<string> stringQueue; //creating dynamic queue for strings
	
	cout << "Enter how many whole numbers you want to put in: ";
	cin >> size;
	cout << "Enter " << size << " whole numbers below." << endl;
	
	cout << "--------------------------";
	cout << endl  << "\n";
	
	// Enqueue n numbers integers
	for (int i = 1; i <= size; i++)
	{

		cout << "Enter whole number: \n";
		cin >> a;
		intQueue.enqueue(a);
	}//end for
	
	
	//dequeue. retrieve all items in the queue
	cout << endl << "The whole numbers you have entered are: \n";
	while (!intQueue.isEmpty())
	{
		int value;
		intQueue.dequeue(value);
		cout << value << " | ";
	}//end while
	
//------------------------------------------------------------------
	cout << endl << endl << "\n";
	cout << "--------------------------";
	cout << endl << endl << "\n";
	
	cout << "Enter how many decimal numbers you want to put in: ";
	cin >> size;
	cout << "Enter " << size << " decimal numbers below." << endl;
	
	cout << "--------------------------";
	cout << endl  << "\n";
	
	// Enqueue n number of decimals
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter decimal number: \n";
		cin >> b;
		doubleQueue.enqueue(b);
	}//end for
	
	// Deqeue and retrieve all items in the queue
	cout << endl << "The decimal numbers you have entered are: \n";
	while (!doubleQueue.isEmpty())
	{
		double value;
		doubleQueue.dequeue(value);
		cout << value << " | ";
	}//end while 
	
//----------------------------------------------------------------------	
	cout << endl << endl << "\n";
	cout << "--------------------------";
	cout << endl << endl << "\n";
	
	cout << "Enter how many strings you want to put in: ";
	cin >> size;
	cout << "Enter " << size << " strings below." << endl;
	
	cout << "--------------------------";
	cout << endl  << "\n";
	
	// Enqueue n numbers strings
	for (int i = 1; i <= size; i++)
	{
		cout << "Enter strings: \n";
		cin >> c;
		stringQueue.enqueue(c);
	}
	
	// Deqeue and retrieve all items in the queue
	cout << "The strings you have entered are: \n";
	while (!stringQueue.isEmpty())
	{
		string value;
		stringQueue.dequeue(value);
		cout << value << " | ";
	}
	
}//end main
