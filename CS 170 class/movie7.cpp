// Erik Sand
// September 13, 2018
// movie7.cpp
// This program for a theater ticket owner will ask for the number of adult and
// child tickets purchased by a customer. The program will charge $8.50 per
// adult and $6.50 per child with no tax added. There are no special prices
// based on any other item.

#include <iostream>
using namespace std;

int main()
{
    int adultTickets;	// the number of adult tickets purchased by the customer
    int childTickets;	// the number of child tickets purchased by the customer
    double adultCost;   // cost for all adult tickets being purchased
                        // in US dollars
    double childCost;   // cost for all child tickets being purchased 
                        // in US dollars
    double totalCost;   // cost for child tickets being purchased in US dollars
    
    // Welcome the user
    cout << "Welcome to the movie ticket program!" << endl << endl;
    cout << "You will enter the number of adult and child tickets being "
	     << "purchased by the customer." << endl;
    cout << "A detailed bill will then display." << endl << endl;    
    
    // Get the number of tickets
    // Get the number of adult tickets
    cout << "Enter the number of adult tickets: ";
    cin >> adultTickets;
    
    
    //	Get the number of child tickets
    cout << "Enter the number of child tickets: ";
    cin >> childTickets;
    
//  cout << adultTickets << endl;  
//  cout << childTickets << endl;  
    
    
    //	Calculate the costs
    //	Calculate the cost for the adult tickets
    adultCost = adultTickets * 8.50;
// cout << adultCost << endl;
 
    //	Calculate the cost for the child tickets
    childCost = childTickets * 6.50;
// cout << childCost << endl; 
 
    //	Calculate the total cost for all tickets
    totalCost = adultCost + childCost;
// cout << totalCost << endl;

 
    //	Display the detailed bill
    //	Display bill title
    cout << "Customer Bill" << endl << endl;
    
    //	Display adult subtotal and detail
    cout << adultTickets << "adults at $8.50     " << adultCost << endl;
    
    //	Display child subtotal and detail
    cout << childTickets << "children at $6.50   " << childCost << endl;
    
    //	Draw a line
    cout << "----------------------------------" << endl;
    
    //	Display the total purchase cost
    cout << "Total Cost           " << totalCost << endl;

    return 0;
}

