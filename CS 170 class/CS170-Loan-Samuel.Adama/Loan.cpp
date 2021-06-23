
// Samuel Adama
// 12th December 2018
// loan.cpp
// I Modified the loan program using loops to ensure that all input values
// are resonable, an interest accumulator, and code that puts the table into a 
// file named loantable.txt

// Tony Gaddis
// This program produces a loan table
// for the Central Mountain Credit Union

#include <iostream>
#include <iomanip>
#include <cmath>		// Needed for the pow function
#include <fstream>		// Needed to use files

using namespace std;

int main()
{
	ofstream outputFile;		// File stream object
	double 	loan,				// Loan amount
			rate,				// Annual interest rate
			moInterestRate,		// Monthly interest rate
			years,				// Years of loan
			balance,			// Monthly balance
			term,				// Used to calculate payment
			payment,			// Monthly payment
			totalInterest = 0;	// Total interest paid, set to 0 to clear out 
								// any other number stored
	int		numPayments;		// Number of payments
	
	// Get loan information
	do {
	cout << "Loan amount: $";
	cin >> loan;
	if (loan < 0)
		cout << "Please input positve values" << endl;
	} while (loan < 0);
	do {
	cout << "Annual interest rate (entered as a decimal): ";
	cin >> rate;
	if (rate <= 0)
		cout << "Please input positve values" << endl;
	} while (rate <= 0);
	do {
	cout << "Years of loan: ";
	cin >> years;
	if (years < 0)
		cout << "Please input postive values" << endl;
	} while (years < 0);
	
	// Open output file
	outputFile.open("loantable.txt");
	
	// Write values to the file
	outputFile << "Loan amount: $" << loan << endl;
	outputFile << "Annual interest rate: " << rate << endl;
	outputFile << "Years of loan: " << years << endl;
	
	// Close the file
	
	
	// Calculate monthly payment
	numPayments = static_cast<int>(12 * years);
	moInterestRate = rate / 12.0;
	term = pow((1 + moInterestRate), numPayments);
	payment = (loan * moInterestRate * term) / (term - 1.0);
	
	// Open the output file
	
	
	// Display monthly payment
	outputFile << fixed << showpoint << setprecision(2);
	outputFile << "Monthly payment: $" << payment << endl;
	
	// Display report header
	outputFile << endl;
	outputFile << setw(5) << "Month"	<< setw(10) << "Interest";
	outputFile << setw(10) << " Principal" << setw(9) << "Balance" << endl;
	outputFile << "----------------------------------\n";
	
	//close the output file
	
	
	balance = loan;		// Remaining balance starts out as full loan amount
	
	// Open the output file
	
	
	// Produce a listing for each month
	for (int month = 1; month <= numPayments; month++)
	{
		double 	moInterest,			// Amount of pmt that pays interest
				principal;			// Amount of pmt that lowers the balance
				
		// Calculate amount paid for this month's interest and principal
		moInterest = moInterestRate * balance;	// Calculate interest first
		if (month != numPayments)				// If not the final month
			principal = payment - moInterest;	// rest of pmt goes
												// to principal
												
		else 									// Its's the last month so
		{										// pay exact final balance
			principal = balance;
			payment = balance + moInterest;
		}
		// Calculate new loan balance			// Only principal reduces the 
		balance -= principal;					// balance, not the whole pmt
		
		// Display this month's payment figures
		outputFile << setw(4) << month	<< setw(10) << moInterest;
		outputFile << setw(10) <<principal << setw(10) << balance <<endl;
		
		// Calculate the total interest
		totalInterest = totalInterest + moInterest;
	}
	
	// Display the total interest paid
	outputFile << "Total interest paid: $" << totalInterest;
	
	// Close the file
	outputFile.close();
	
	cout << endl << "Data written to loantable.txt\n";
	
	return 0;
}
