// Samuel Adama
// Pointers.cpp
// 9/11/19
// This program will hold a user defined number of test scores then pass it to a function that sorts them in 
// ascending order and anither function that calculates the average score.

#include <iostream>
using namespace std;

int main()
{
	double *scores; 	//stores the test scores inout by user
	double *ptr; 		//points to a interger that gets put into the scores array
	int count; 			//counts the amount of times the loop runs
	int size; 			// stores the number of scores
	double sum = 0;		 // stores the sum of all input test scores
	double average;		 // calculate average of all input test scores
	int  temp; 			//stores values for swap
	bool swap;			 //swaps values if needed
	
	// Number of test taken inputted by user
	do
	{
	cout << "How many Test Scores ? ";
	cin >> size;
		if (size < 0)
		{
		cout << "Can't have negative number of test.\n";
		}
	}
	while (size < 0);
	//cin >> size;

   scores = new double [size];
	
	// input test scores
   cout << "Enter the test scores by the " << size << " students.\n";
        
        
   for (count = 0, ptr = scores; count < size; count++, ptr++)
	{
	cout << "Enter the test scores by student " << count+1 << ": ";
       cin >> *ptr;
       while (*ptr < 0)
       {
       	cout << "Error You can't enter a negative test score !\n";
       	cout << "Enter a new test score: ";
       	cin >> *ptr;
       }
	}


//do while loop for sort array from pr9-04.cpp - professor sand
	do
	{	
		swap = false;
		for (count = 0, ptr = scores; count < (size - 1); count++, ptr++)
		{
			if (scores[count] > scores[count + 1])
			{
				temp = scores[count];
				scores[count] = scores[count + 1];
				scores[count + 1] = temp;
				swap = true;
			}
		}
   } while (swap);  // Loop again if a swap occurred on this pass.


   // Display contents of the array
    cout << "The " << size << " test scores are:";
   for (count = 0, ptr = scores; count < size; count++, ptr++)
        cout << " " << *ptr;
   		cout << endl;
   
   //Display Average
   for (count = 0, ptr = scores; count < size; count++, ptr++)
   {
   		sum += *ptr;
   }
	average = sum/size;
	cout << "The average test score is: " << average;
   return 0;
   
}
