// Samuel Adama
// 10/16/19
// Professor Erik Sand
// stack.cpp
// this program will ask for a string input with delimiters then tell wether the
// delimiters are properly used
// assisted by Jean

#include "IntStack.h"
#include<iostream>
#include<stack>
#include<string>

using namespace std;

// function to check the opening and closing character type. 
// o for opening, c for closing
bool ArePair(char o,char c)
{
	if(o == '(' && c == ')') return true;
	else if(o == '{' && c == '}') return true;
	else if(o == '[' && c == ']') return true;
	
	//extra credit code
	else if(o == '<' && c == '>') return true;
	else if(o == '"' && c == '"') return true;
	
	return false;
}//end bool function for pair

// boolean function to check if opening and closing are the same type/balanced
bool IsExpressionBalanced(string exp)
{
	stack<char>  IntStack;
	for(int o =0;o<exp.length();o++)
	{
		if(exp[o] == '(' || exp[o] == '{' || exp[o] == '[' || exp[o] == '<' || exp[o] == '"')
			IntStack.push(exp[o]);
		else if(exp[o] == ')' || exp[o] == '}' || exp[o] == ']' || exp[o] == '>' || exp[o] == '"')
		{
			if(IntStack.empty() || !ArePair(IntStack.top(),exp[o]))
				return false;
			else
				IntStack.pop();
		}//end else if
	}//end for
	return IntStack.empty() ? true:false;
}//end bool function for isExpressionbalanced


//Main
int main()
{
	string expression1; //variable to store expression from user
	cout << "Enter an expression:  "; 
	cin>>expression1; //store user input into expression variable
	
	//calls isExpressionBalanced function. prints statement depending on if balanced or not.
	if(IsExpressionBalanced(expression1))
		cout<<"Expression is Balanced.\n";
	else
		cout<<"Expression is Not Balanced.\n";
		
	
	string expression2; //variable to store expression from user
	cout << "Enter an expression:  "; 
	cin>>expression2; //store user input into expression variable
	
	//calls isExpressionBalanced function. prints statement depending on if balanced or not.
	if(IsExpressionBalanced(expression2))
		cout<<"Expression is Balanced.\n";
	else
		cout<<"Expression is Not Balanced.\n";
		
		
	string expression3; //variable to store expression from user
	cout << "Enter an expression:  "; 
	cin>>expression3; //store user input into expression variable
	
	//calls isExpressionBalanced function. prints statement depending on if balanced or not.
	if(IsExpressionBalanced(expression3))
		cout<<"Expression is Balanced.\n";
	else
		cout<<"Expression is Not Balanced.\n";
		
}//end main
