//Samuel Adama
// 12/5/2019
// Prof Erik Sand
// This Password program requires user to enter their own passwords and
// accepts it if it meets the criteria's. Has to be 6 characters long,
// have an upper and lower case letter and have atleast one digit.
// Recieved help from a cplusplus.com forum - 
// http://www.cplusplus.com/forum/beginner/130205/ 



# include <iostream>      // i/o header file
# include <cctype>            // header file needed for testing characters (e.g., isupper())
# include <cstring>           //header file needed for using strlen() function
using namespace std;
 
bool upper (char []);       //function prototype for function testUpper
bool lower (char  []);      //function prototype for function testLower
bool digit (char  []);      //function prototype for function testDigit
bool pVerify(char []);     // function prototype for function pswordVerify

int main ()
{
    const int LENGTH = 25;     // Maximum length of string
    char password[LENGTH];      // array allows up to 100 characters for a password

    cout << "PASSWORD VERIFICATION PROGRAM " << endl;
    cout << "Please create a password using only 6 characters. " << endl;
    cout << "The password must contain at least 1 uppercase "<< endl;
    cout << "and lowercase letter, and 1 digit.\n" << endl;

    cin.getline(password, LENGTH);     

    if  (pVerify(password))
	{
	
        cout << "Your Password has been accepted! " << endl;
	}
        
    while (!pVerify(password))
    {
        cout << "\nError! Your password requires the following." << endl;
        cout << "A password must be at least 6 characters. ";
        cout << "Have atleast 1 uppercase and 1 lowercase letter. "<< endl;
        cout << "Contain 1 digit (0 through 9)." << endl;

        cin.getline(password, LENGTH);  //user reenters password
            
        if (pVerify(password))
        cout << "Your Password has been accepted!\n";
    }

    return 0;

}

bool pVerify(char psword [])

{
    bool result =false;
    int  length = strlen(psword);
    upper(psword);
    lower (psword);
    digit (psword);
     

    result = upper(psword) && lower(psword) && digit(psword) && (length>=6);

    return result;

}

bool upper (char psword [])
{
    int length = strlen(psword);
    int count;

    for (count = 0; count < length;  count++)
    {
        if (isupper (psword[count]))
            return true;
    }
    
    return false;
}

bool lower (char psword [])

{
    int length = strlen(psword);
    int count;

    for (count = 0; count < length;  count++)
    {
        if (islower (psword[count]))

        return true;
    }

    return false;
}
 
bool digit (char psword [])
{
    int length = strlen(psword);
    int count;
    for (count = 0; count < length;  count++)
    {
        if (isdigit (psword[count]))
        return true;
    }
    return false;

}

