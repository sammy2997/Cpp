// Samuel Adama
// 11/11/2019
// Professor Erik Sand
// BinaryTreeMain.cpp
// Program will create a binary tree
// Code copied from 19-04.cpp from Professor sand Programs in CS300 folders.
// Received assistance from Josiah Cage & Sean

#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BinaryTree tree;
   
    //initiate a variable used for use input
   	int num;
   	
    cout << "Inserting the numbers..." << endl;
    
    //insert numbers to create the binary tree
    tree.insert(70);
    tree.insert(29);
    tree.insert(43);
    tree.insert(1);
    tree.insert(57);
    tree.insert(0);
    tree.insert(9);
    tree.insert(94);
    tree.insert(6);
    tree.insert(22);
    tree.insert(13);
    tree.insert(760);
    tree.insert(61);
    tree.insert(38);
    cout << "Numbers have been successfully inserted" << endl;
    
    //use inOrder function to put values in binary tree in order then display it
    cout << "The values in order are: ";
    tree.showInOrder();
    
    //promt user to search for a value of their choice
    cout << "\nEnter the value you want searched for\n";
    //store the user entered value in the num variable
    cin >> num;
    
    cout << " " << endl;
    cout << "---------------------------------" << endl;
	cout << " " << endl;
	
    //if number input by user exists in the list, print message
    if(tree.search(num))
		cout << num << " has been found in the tree. ";
		
	//if number input by user doesn't exists in the list, print message
	else
		cout << num << " has not been found in the tree. ";   
	
	cout << "\n " << endl;
	
	//tests the size method
	cout << "The size of the binary tree is " << tree.size() << endl;
	
	cout << "\n " << endl;
	
	//tests the leafCount method
	cout << "The leaf count of the binary tree is " << tree.leafCount() << endl;
	
	cout << "\n " << endl;
	
	//tests the height method
	cout << "The height of the binary tree is " << tree.height() << endl;
    return 0;
}// end main 
