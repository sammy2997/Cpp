// Samuel.Adama
// January 30 2019 


// getPatientData - ask the user for inpatient data of number of days stayed,
// dailyRate, cost for services, cost for medications and return each value
// via a reference parameter
  
#include <iostream>
#include "Hospital.h"

using namespace std;
 

void GetPatientData(int & days, double & rate, double & services, double & meds)
{
	days = validateInput("Enter the number of days stayed: ");
	rate = validateInput("Enter the Daily Rate: ");
	services = validateInput("Enter the cost of services(in Dollars): ");
	meds = validateInput("Enter the cost of medications(in Dollars): ");
}


