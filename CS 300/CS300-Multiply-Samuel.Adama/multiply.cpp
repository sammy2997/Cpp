// Samuel Adama
// 9/19/2019
// Write a recursive function that accepts two arguments into the parameters x and y.

#include <iostream>

using namespace std;


// code for the multiply function
int multiply(int num1, int num2)
{
	if(num1 == 1)
		return num2;
	else if(num2 == 1)
		return num1;
	else if(num1 == 0 || num2 == 0)
		return 0;
	else
	{
		return (num1 + multiply(num2-1, num1));
	}	
}



int main()
{
	int num1;		// first number
	int num2;		// second number
	
	// test calls for the funtion multiply
	cout << "1*8 = " << multiply(1,8) << endl;
	cout << "4*0 = " << multiply(4,0) << endl;
	cout << "2*8 = " << multiply(2,8) << endl;
	cout << "6*3 = " << multiply(6,3) << endl;
	cout << "-4*10 = " << multiply(-4,10) << endl;
	cout << "5*90 = " << multiply(5,90) << endl;
	cout << "-3*-16 = " << multiply(3,16) << endl;
	cout << "87*0 = " << multiply(87,0) << endl;
	cout << "10*17 = " << multiply(10,17) << endl;
	cout << "43*5 = " << multiply(43,5) << endl;
	
	return 0;
	
}


