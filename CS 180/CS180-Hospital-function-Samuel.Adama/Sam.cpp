// Samuel.Adama
// Sam.cpp
// January 30 2019 


#include <iostream>
#include "Hospital.h"
#include <string>

using namespace std;

int main()
{
	double services,
		   meds;
	
	GetPatientData(services, meds);
	
	return 0;
}

void GetPatientData(double & services, double & meds)
{
	
	services = Validate("Services charges: ");
	meds = Validate("Medication charges: ");
	
}
