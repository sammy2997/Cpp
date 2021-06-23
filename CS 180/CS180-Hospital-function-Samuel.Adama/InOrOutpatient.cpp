// Samuel.Adama
// Sam.cpp
// January 30 2019 


#include <iostream>
#include "Hospital.h"
#include <string>
using namespace std;

int main()
{
	int ptype;
	
	ptype = inOrOutPatient();
	if (ptype == IN_PATIENT)
		cout << "INPATIENT!!!\n";
	else if (ptype == OUT_PATIENT)
		cout << "OUTPATIENT!!!\n";
	else 
		cout << "ERROR!!!\n";
	return 0;
}
// InOrOutPatient - ask user if patient is an inpatient or outpatient and 
// return via a return statement an integer code to represent the patient type.
int inOrOutPatient()
{

	char response;			// user's response to the yes or no question
	
	do
	{
		cout << "Is this Billing for an inpatient? (y/n) ";
		cin >> response;
		if (response != 'y' && response != 'Y' && response != 'n' && response != 'N');
			cout << "ERROR!! : You must answer with 'y' or 'n'!!!\n";
	} while (response != 'y' && response != 'Y' && response != 'n' && response != 'N');
	if (response == 'y' || response == 'y')		// if yes then an inpatient
		return IN_PATIENT;
	else						// else patient is an outpatient
	{
		cout << "Therefore the patient is assumed to be an Outpatient!\n";
		return OUT_PATIENT;	
	}
}








// void GetPatientData(double & services, double & meds)
//{
	
//	services = Validate("Services charges: ");
//	meds = Validate("Medication charges: ");
	
//}
