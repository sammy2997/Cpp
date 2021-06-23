// Samuel Adama
// 11/11/2019
// Professor Erik Sand
// BinaryTree.h
// Contains the Binarytree.cpp code as well
// Code copied and used from BinaryTree.h and BinaryTree.cpp from Professor Sand Programs
// Received assistance from Josiah


#include <iostream>

using namespace std;

//start BinaryTree.h section
class BinaryTree
{
private:
   // The TreeNode class is used to build the tree.
	class TreeNode
	{
       friend class BinaryTree;
       int value;
       TreeNode *left;
       TreeNode *right;
       TreeNode(int value1, TreeNode *left1 = 0,
                            TreeNode *right1 = 0)
       {
          value = value1;
          left = left1;
          right = right1;
       }//end treenode          
	};//end class treenode
   
	TreeNode *root;     // Pointer to the root of the tree
	
	// Various helper member functions.
    void insert(TreeNode *&, int);
	void displayInOrder(TreeNode *);
	int size(TreeNode *);
	int leafCount(TreeNode *);
	int height(TreeNode *);
	
public:
   // These member functions are the public interface.
	BinaryTree()		// Constructor
		{ root = 0; }//end constructor
	void insert(int num)
        { insert(root, num); }//end displayInsert
	bool search(int);
	void showInOrder(void)
		{ displayInOrder(root); }//end displayinOrder
	int size()
		{ size(root); } //end displaySize
	int leafCount();
	int height()
		{ height(root); } //end displayHeight
};
//end BinaryTree.h section

//start BinaryTree.cpp section. inserts the numbers
void BinaryTree::insert(TreeNode * &tree, int num)
{
   // If the tree is empty, make a new node and make it 
   // the root of the tree.
   if (!tree)
      { 
        tree = new TreeNode(num);
        return;
      }//end if to check if tree is empty
		
   // If num is already in tree: return.
   if (tree->value == num)
     return;

   // The tree is not empty: insert the new node into the
   // left or right subtree.
   if (num < tree->value)
      insert(tree->left, num);
   else
      insert(tree->right, num);
}//end insert funtion   
	

//search the binary tree to determine if a value is present in   
// the tree. If so, the function returns true. Otherwise, it returns false. 

bool BinaryTree::search(int num)
{
   TreeNode *tree = root;

   while (tree)
   {
      if (tree->value == num)
         return true;
      else if (num < tree->value)
         tree = tree->left;
      else
         tree = tree->right;
   }
   return false;
}//end search funtion
	

// Display the values stored in a tree in inorder.                                            
void BinaryTree::displayInOrder(TreeNode *tree)
{
    if (tree)
    {
       displayInOrder(tree->left);
       cout << tree->value << "  ";
       displayInOrder(tree->right);
    }
}//end displayInOrder function


// Calculates the size of the binary tree    
int BinaryTree::size(TreeNode *root)
{
	if(root)
		return size(root->right) + 1 + size(root -> left);
	else
		return 0;
}//end size function


// Count the leafs in the binary tree without the root                                     
int BinaryTree::leafCount()
{
	leafCount(root);
}//end leafCount function without root


// Count the leafs in the binary tree with the root  
int BinaryTree::leafCount(TreeNode *root)
{
	if(root)
	{
		if(root->left == NULL && root->right == NULL)
			return 1;
		else
			return leafCount(root->left) + leafCount(root->right);
	}//end check for left and right node
}//end leafCount function with root


// Calculate the height in the binary tree 
int BinaryTree::height(TreeNode *root)
{
	if(root)
		return 0;
	int leftSize = height(root->left);
	int rightSize = height(root->right);
	
	if(leftSize < rightSize)
		return rightSize + 1;
	else
		return leftSize + 1;
}//end height function
