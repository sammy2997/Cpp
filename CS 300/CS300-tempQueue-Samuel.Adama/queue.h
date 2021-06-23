// Samuel Adama
// 28th October 2019
// Professor Erik Sand
// queue.h
// Received assistance from Sean Loken

#define QUEUE_H
#include <iostream>

using namespace std;

template <class T>
class DynQueue
{
	private:
		struct QueueNode
		{
			T value;		//value for queue
			QueueNode *next;	// pointer
		};//end struct
		
		QueueNode *front;		//front of queue
		QueueNode *back;		//back of queue
		int items;				//number of the items in the queue
	public:
		DynQueue();				//dynmic queue constructor
		~DynQueue();			//dynmic queue desctructor
		
		void enqueue(T);		//function to add to queue
		void dequeue(T&);		//function to delete from queue
		bool isEmpty() const;	//function to check if queue is empty
		bool isFull() const;	//functin to check if queue is full
		void clear();			//function to clear queue
};//end class


//dynamic queue constructor
template <class T>
DynQueue<T>::DynQueue()
{
	front = NULL;
	back = NULL;
	items = 0;
}

//dynamic queue destructor
template <class T>
DynQueue<T>::~DynQueue()
{
	clear();
}

//enqueue function
template <class T>
void DynQueue<T>::enqueue(T random)
{
	QueueNode *newNode = NULL;
	
	//create a new node and store val 
	newNode = new QueueNode;
	newNode->value = random;
	newNode->next = NULL;
	
	//adjust front & back 
	if(isEmpty())
	{
		front = newNode;
		back = newNode;
	}
	
	else
	{
		back->next = newNode;
		back = newNode;
	} //end if else
	
	//update items
	items++;
}//end enqueue function

//dequeue function
template <class T>
void DynQueue<T>::dequeue(T &random)
{
	QueueNode *temp = NULL;
	
	if(isEmpty())
	{
		cout << "The Queue is empty.\n";
	}//end if
	else
	{
		//save the front node value
		random = front -> value;
		
		//Remove and delete front node
		temp = front;
		front = front -> next;
		delete temp;
		
		//update items
		items--;
	}//end else
}//end dequeue function

//isEmpty function
template <class T>
bool DynQueue<T>::isEmpty() const
{
	bool check;
	
	//if there is more than 0 items, check for empty is false
	if(items > 0)
		check = false;
		
	//if there is  0 items, check for empty is true
	else
		check = true;
	return check;//return whatever check value received
}//end isEmpty function

//clear function
template <class T>
void DynQueue<T>::clear()
{
	T value;	
	
	while(!isEmpty())
		dequeue(value);
}//end clear function
