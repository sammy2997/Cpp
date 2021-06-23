// This program uses the bubble sort algorithm to sort an array
// of integers in ascending order.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main()
{
	const int SIZE = 10000;
	int count;
	int values[SIZE];
    time_t seconds;

    // get the current time
    time(&seconds);
   
    //seed the random number generator with the current time
    srand(seconds);
    
    cout << "How many values do you want to sort: ";
    cin >> count;
    
    for (int i = 0; i < count; i++)
        values[i] = rand();

	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, count);
	
	// Sort the values
	sortArray(values, count);
	
	// Display them again
	cout << "The sorted values are:\n";
	showArray(values, count);

	return 0;
}

/************************************************************
 *                        sortArray                         *
 * This function performs an ascending-order bubble sort on *
 * array. The parameter size holds the number of elements   *
 * in the array.                                            *
 ************************************************************/
void sortArray(int array[], int size)
{
	int  temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
   } while (swap);  // Loop again if a swap occurred on this pass.
}

/*************************************************************
 *                        showArray                          *
 * This function displays the contents of array. The         *
 * parameter size holds the number of elements in the array. *
 *************************************************************/
void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}
