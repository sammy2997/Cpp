#include <iostream>
#include <iomanip>
#include "Hospital.h"
using namespace std;

int main()
{
     int status;	    // (1)inpatient or (2)outpatient status
     int days;          // days for hospital stay
     double rate;       // daily rate for hospital stay
     double services;   // cost of hospital services
     double meds;       // cost of medications
     double totalCost;  // total cost for inpatient or outpatient stay
    
     status = InOutPatient();
     if (status == 2)
     {
          GetPatientData(services, meds);
          totalCost = CalculateCharges(services, meds);
          DisplayInvoice(services, meds, totalCost);
     }
     else
     {
          GetPatientData(days, rate, services, meds);
          totalCost = CalculateCharges(days, rate, services, meds);
          DisplayInvoice(days, rate, services, meds, totalCost);
     }
       
     return 0;   
}

void GetPatientData(int & days, double & rate, double & services, double & meds)
{
	days = 2;
	rate = 987.12;
	services = 876.54;
	meds = 445.32;
}

void GetPatientData(double & services, double & meds)
{
    services = 123.45;
    meds = 67.89;
}

double CalculateCharges(int days, double rate, double services, double meds)
{
    return 231.74;
}

double CalculateCharges(double services, double meds) 
{
    return 231.74;
}

void DisplayInvoice(int days, double rate, double services, double meds, double total)
{
	cout << days << endl;
	cout << rate << endl;
    cout << services << endl;
    cout << meds << endl;
    cout << total << endl;
}

// function for displaying medical costs
void DisplayInvoice(double services, double meds, double totalCost)
{
    cout << services << endl;
    cout << meds << endl;
    cout << totalCost << endl;
}

int InOutPatient() // return 2 for outpatient, 1 for inpatient  Erik Sand
{
   return 1;
}
