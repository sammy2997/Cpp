//Samuel Adama
//Professor Sand
//encrypt.cpp
// 12/10/2019
//this program will solve the challenges 7 and 8 from chapter 13.
//Josiah and Sean assisted me with this assignment 

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	const int encryption = 50; 	//amount of increase to ascii code 
	const int decryption = -50; //how much to decrypt the file by
	const int size = 255;		//size of the char array
	char charArray1 [size];		//array for the encryption
	char charArray2 [size];		//array for decryption
	char current;				//holds current character
	
	ifstream input1;
	ofstream output1;
	ifstream input2;
	ofstream output2;
	
	// for encryption
	cout << "What file would you like to encrypt: " << endl;
	cin.getline(charArray1, size);
	
	input1.open(charArray1);
	output1.open("newfile.txt");
	
	input1.get(current);
	
	while(!input1.eof()) 
	{
		current += encryption;
		
		output1.put(current);
		
		input1.get(current);
	}
	
	input1.close();
	output1.close();
	
	cout << "The file " << charArray1 << " was encrypted and saved to newfile.txt." << endl;

	//for decryption
	cout << "What file would you like to decrypt: " << endl;
	cin.getline(charArray2, size);
	
	input2.open(charArray2);
	output2.open("decrypt.txt");
	
	input2.get(current);
	
	while(!input2.eof()) 
	{
		current += decryption;
		
		output2.put(current);
		
		input2.get(current);
		
	}
	
	input2.close();
	output2.close();
	
	cout << "The file " << charArray2 << " was decrypted and saved to decrypt.txt." << endl;
		 
	return 0;
	
}
