// This program uses the bubble sort algorithm to sort an array
// of integers in ascending order.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(const int [], int);

// Global counters for profiling
int compares = 0;
int exchanges = 0;

int main()
{
	const int SIZE = 10000;
	int count;
	int trials;
	int values[SIZE];
    time_t seconds;

    // get the current time
    time(&seconds);
   
    //seed the random number generator with the current time
    srand(seconds);
    
    cout << "How many values do you want to sort: ";
    cin >> count;
    
    cout << "How many trials do you want to do: ";
    cin >> trials;

    for(int n = 1; n <= trials; n++)
    {    
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
    }
    
    cout << endl << endl;
    cout << "The average number of comparisons was " << compares/trials << endl;
    cout << "The average number of exchanges was " << exchanges/trials << endl;
    
    cin >> count;

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
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++)
		{
			compares++;
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
	}
		exchanges++;
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
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
