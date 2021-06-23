// Samuel Adama
// 10/8/2019
// Professor Erik Sand
// This program is a compilation of multiple codes from the C++ book and programming challenge
// with help from a CS tutor/major and the C++ book.


#include <iostream>
using namespace std;

class linkedList 
{
	protected:
	// used code from LinkedList.h but modified 
	struct ListNode
	{
		double value;
		ListNode *next; 
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	
	};	//end listNode structure
	
	
	ListNode *head;
	//create public variables
	public:
	 
		void add(double x);											// pg.1036-1037
		bool isMember(double x);									//pg.1036-1037
		linkedList();												//pg.1036-1037
		void print();
		linkedList(const linkedList &location);
		void remove(double x);
		~linkedList();

		
	
};
	
linkedList::linkedList()
{
	head = NULL;
}

//constructor to add values
void linkedList::add(double x)
{
	//if head is null then add the value to the head
	if(head == NULL)
		head = new ListNode(x);
		
	//else if head isn't null move pointer to add value
	else
	{
		
       ListNode *firstNode = head;
       while (firstNode->next != NULL)
          firstNode = firstNode->next;

       firstNode->next = new ListNode(x);
	}
}

//tests to see if a varible is in the list, got help from a tutor with this one
bool linkedList::isMember(double x)
{
	if(head == NULL)
		return false;
	else
	{
		ListNode *firstNode = head;
		while(firstNode != NULL && firstNode-> value != x)
			firstNode = firstNode->next;
		
		if(firstNode == NULL)
			return false;
		else
			return true;
	}
			
}

//function to print the list and modeled after the displaylist function of 1029
void linkedList::print()
{
	ListNode *firstNode = head;
	
	while(firstNode)
	{
		cout << firstNode->value << " | ";
		firstNode = firstNode->next;
	}
}


//this code is from the book pg.1036-1037
void linkedList::remove(double number)
{
	ListNode *firstNode, *previousNodePointer;
	
	if(!head) 
		return;
	
	if(head -> value == number)
	{
		firstNode = head;
		head = head -> next;
		delete firstNode;
	}
	else
	{
		firstNode = head;
		
		while(firstNode != NULL && firstNode -> value != number)
		{
			previousNodePointer = firstNode;
			firstNode = firstNode -> next;
		}
		
		if(firstNode)
		{
			previousNodePointer->next = firstNode->next;
			delete firstNode;
		}
	}
}	

//destructor similar to one on pg.1029	
linkedList::~linkedList()
{
	ListNode *firstNode = head;
	
	while(firstNode != NULL)
	{
		ListNode *trash = firstNode;
		firstNode = firstNode -> next;
		
		delete trash; 
		trash = 0;
	}
}


//program main
int main()
{

	//initialize test values
	double test1 = 94;
	double test2 = 46;
	double test3 = 78.6;
	double test4 = 69;
	double test5 = 41.3;
	double test6 = 83.9;
	double test7 = 52;
	
	//create list for test values to be stored in
	linkedList obj1;
	
	//add test values to the list
	obj1.add(test1);
	obj1.add(test3);
	obj1.add(test4);
	obj1.add(test6);
	obj1.add(test7);
	
	//check if test values are in list. if in list, output first cout statement
	//if not in list, output second cout statement
	if(obj1.isMember(test1))
		cout << test1 << " is in the list. " << endl;
	else
		cout << test1 << " is not in the list. " << endl;
	if(obj1.isMember(test2))
		cout << test2 << " is in the list." << endl;
	else
		cout << test2 << " is not in the list." << endl;
	if(obj1.isMember(test3))
		cout << test3 << " is in the list." << endl;
	else
		cout << test3 << " is not in the list." << endl;
	if(obj1.isMember(test4))
		cout << test4 << " is in the list." << endl;
	else
		cout << test4 << " is not in the list." << endl;
	if(obj1.isMember(test5))
		cout << test5 << " is in the list." << endl;
	else
		cout << test5 << " is not in the list." << endl;
	if(obj1.isMember(test6))
		cout << test6 << " is in the list." << endl;
	else
		cout << test6 << " is not in the list." << endl;
	if(obj1.isMember(test7))
		cout << test7 << " is in the list." << endl;
	else
		cout << test7 << " is not in the list." << endl;
	
	
	//print list
	cout << endl << "The numbers that are in the list are: "; 
	obj1.print();
	cout << endl;
	
	//delete values from the list and then print list
	cout << "The numbers that are in the partially deleted list are: ";
	obj1.remove(test4);
	obj1.remove(test7);
	obj1.print();
	cout << endl << endl;

	return 0;
} // end main
	
	
	
	
