//Samuel Adama
// 12/5/2019
// Prof Erik Sand
// This Password program requires user to enter their own passwords and
// accepts it if it meets the criteria's. Has to be 6 characters long,
// have an upper and lower case letter and have atleast one digit.
// Recieved help from a cplusplus.com forum - 
// http://www.cplusplus.com/forum/beginner/130205/ 


#include<iostream>
#include<string>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
string password;
int length;
bool acceptable=false;
bool uppercase=false;
bool lowercase=false;
bool digit=false;


do
{
	cout<<"Please Enter a password - " << endl ;
	getline(cin, password);
	length=password.length();

if(length<6)
{
	cout<<"Error! Your password must be at least 6 characters long. Re-enter Password. \n";
}



for(int i=0; i<length; i++)
{
	
	
	if(isupper(password[cin]))
	{
	uppercase=true;
	}

	if(islower(password[i]))
	{
	lowercase=true;
	}

	if(isdigit(password[i]))
	{
	digit=true;
	}
	
}

if(uppercase==true && lowercase==true && digit==true)
{
	acceptable=true;
	
}

else if(length >= 6 && (uppercase==false || lowercase==false))
{
	acceptable=false;
	cout<<"Error! Your password needs at least one uppercase and one lowercase letter." << endl;
}

else if(length >= 6 && uppercase==true && lowercase==true && digit ==false)
{
	acceptable=false;
	cout<<"Error! Your password needs at least one digit." << endl;
}
}

 


while(acceptable==true);
	cout<<"Your password has been accepted." << endl;
	return 0;
}
