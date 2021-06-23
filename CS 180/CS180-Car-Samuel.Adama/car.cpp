// Samuel Adama
// 28/02/19
// car.cpp
// This program will create a car object, and then call the accelerate funtion.
// It will record the current speed and display it then it will call the a 
// function to brake the car object, get the curent speed and display it.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Vehicle
{
	private:
		int year;				//the year the car was manufactured
		string make;			//the make of the car
		int speed;				// the speed of the car
	public:
		Vehicle(int, string);
		
		int getyear()
		{ return year;}
	
		string getmake()
		{ return make;}
		
		int getspeed();
		
		int accelerate();
		
		int brake();
		
		
};

Vehicle::Vehicle(int carYear = 2010, string carMake = "Kia Forte")
{
	year = carYear;
	make = carMake;
	speed = 0;
}

int Vehicle::getspeed()
{ return speed;
}

int Vehicle::accelerate()
{
	Vehicle::getspeed();
	speed = speed + 10;
	return speed;
}

int Vehicle::brake()
{
	speed = speed - 10;
	return speed;
}






int main()
{
	Vehicle car;
	int carYear,					// year the car was manufactured
		carSpeed;					// variable for the cars speed
	string carMake;					// make of the car
	
	// Welcome
	cout << "Hello, this program will ask the user for their input by asking " << endl;
	cout << " for the make and year of a particular car. Then the program " << endl;
	cout << "will then record and display the acceleration and " << endl; 
	cout << "deceleration of the car" << endl << endl;
	
	// Get year and make
	cout << "What is the year of the car: " << car.getyear() << endl;
	cout << "What is the make of the car: " << car.getmake() << endl;
	
	
	// Accelerate the car
	cout << endl << "-----------------_-----------";
	cout << endl << "The car will now begin to accelerate." << endl;
	cout << endl << car.accelerate();
	cout << endl << car.accelerate();
	cout << endl << car.accelerate();
	cout << endl << car.accelerate();
	cout << endl << car.accelerate();
	
	// decelerate the car
	cout << endl << endl << "The Brakes will now be applied on the car to decelerate." << endl;
	cout << endl << car.brake();
	cout << endl << car.brake();
	cout << endl << car.brake();
	cout << endl << car.brake();
	cout << endl << car.brake();
	
	
	return 0;
}
