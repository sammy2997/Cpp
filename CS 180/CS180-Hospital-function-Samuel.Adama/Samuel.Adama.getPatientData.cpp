// Samuel.Adama
// January 30 2019 


// getPatientData - ask the user for inpatient data of number of days stayed,
// dailyRate, cost for services, cost for medications and return each value
// via a reference parameter
  
#include <iostream>

using namespace std;


void GetPatientData(int & days, double & rate, double & services, double & meds)
{
	cout << "How many days did the inpatient spend at the Hospital: " << endl;
	cin >> days;
	cout << "What was the Daily Rate: " << endl;
	cin >> rate;
	cout << "Enter the cost of services(in Dollars): " << endl;
	cin >> services;
	cout << "Enter the cost of medications(in Dollars): " << endl;
	cin >> meds;
}

int main()
{
	int days;
	double rate;
	double services;
	double meds;
	
	cout << "Enter the number of days stayed: " << endl;
	cin >> days;
	cout << "Enter the Daily Rate: " << endl;
	cin >> rate;
	cout << "Enter the cost of services(in Dollars): " << endl;
	cin >> services;
	cout << "Enter the cost of medications(in Dollars): " << endl;
	cin >> meds;
	
	
	cout << "Number of days stayed = " << days << endl;
	cout << "Daily Rate = " << rate << endl;
	cout << "Cost of services = " << services << endl;
	cout << "Cost of Medications = " << meds << endl;
	
		
	return 0;
}






