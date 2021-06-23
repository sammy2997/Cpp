// Erik Sand and class
// January 24, 2019
// hospital.h
// defines the necessary constants and the function prototypes for a hospital
// billing program

#include <string>
using namespace std;

const int IN_PATIENT = 1;		// represents an in patient
const int OUT_PATIENT = 2;		// represent an out patient

// inOrOutPaient - ask user if patient is an inpatient or out patient and return
// via a return statement an integer code to represent the patient type.
int inOrOutPatient();

// getPatientData - ask the user for inpatient data of number of days stayed,
// dailyRate, cost for services, cost for medications and return each value
// via a reference parameter
void getPatientData(int &days, double &rate, double &services, double &meds);

// getPatientData - ask the user for out patient data cost for services, cost
// for medications and return each value via a reference parameter
void getPatientData(double &services, double &meds);

// validateInput - using the prompt provided in the value parameter, ask the user
// for input and validate that the input is not negative before returning the
// value
double validateInput(string prompt);

// calculateCharges - using data passed by value (days, rate, service, meds),
// calculate the room charge and the total charge and return each via a
// reference parameter for an inpatient
void calculateCharges(int days, double rate, double service, double meds,
     					double &roomTotal, double &total);
     					
// calculateCharges - using data passed by value (service, meds), calculate
// the total charge and return it for an outpatient
double calculateCharges(double service, double meds);

// displayBill - using the data passed by value, generate and display a nicely
// formatted bill for the inpatient
void displayBill(int days, double rate, double room, double service, double meds,
                 double total);
                 
// displayBill - using the data passed by value, generate and display a nicely
// formatted bill for the outpatient
void displayBill(double service, double meds, double total);                 

  					
