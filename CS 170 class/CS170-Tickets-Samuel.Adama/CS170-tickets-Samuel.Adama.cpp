// Samuel Adama
// 10/3/18
// tickets.cpp
// Provide a program that will calculte the total revenue of tickets sold, from 
	// values that are given by the user

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double A_PRICE = 15.00;	// Price of the A tickets
	const double B_PRICE = 12.00;	// Price of the B tickets
	const double C_PRICE = 9.00;	// Price of the C tickets
	int A_tickets;					// Number of A tickets sold
	int B_tickets;					// Number of B tickets sold
	int C_tickets;					// Number of C tickets sold
	double A_revenue;				// Total revenue of A tickets sold
	double B_revenue;				// Total revenue of B tickets sold
	double C_revenue;				// Total revenue of C tickets sold
	double TotalRevenue;			// Total revenue of all tickets sold
	
	// Welcome the user
	cout << "This program will calculate the total revenue of tickets sold"; 
	
	// Explain what the user will be asked to provide
	cout << "You will be asked to povide the number of A, B, and C sold."
		 << endl << endl;
	
	
		// Get the number of tickets sold
		cout << fixed << setprecision(2);
		// Get the number of A tickets sold
		cout << "Enter the number of Class A tickets sold at $" << A_PRICE << 
			 " each: ";
		cin >> A_tickets;
		// Get the number of B tickets sold
		cout << "Enter the number of Class B tickets sold at $" << B_PRICE << 
			 " each: ";
		cin >> B_tickets;
		// Get the number of C tickets sold
		cout << "Enter the number of Class C tickets sold at $" << C_PRICE << 
			 " each: ";
		cin >> C_tickets;
		
		// Calculations 
		// Calculate revenue for A tickets sold
		A_revenue = A_PRICE * A_tickets;
		// Calculate revenue for B tickets sold
		B_revenue = B_PRICE * B_tickets;
		// Calculate revenue for C tickets sold
		C_revenue = C_PRICE * C_tickets;
		// Calculate Tje total revenue of tickets sold
		TotalRevenue = A_revenue + B_revenue + C_revenue;
		
		// Display results
		// Display A revenue 
		cout << endl << endl <<"Class A ticket revenue: " << setw(11) 
			 << A_revenue << endl;
		// Display B revenue 
		cout << "Class B ticket revenue: " << setw(11) << B_revenue << endl;
		// Display C revenue 
		cout << "Class C ticket revenue: " << setw(11) << C_revenue << endl;
		// Added line
		cout << "_______________________________________" << endl;
		// Total revenue
		cout << "Total ticket revenue:   " << setw(11) << TotalRevenue;
		
		
		
		
}
