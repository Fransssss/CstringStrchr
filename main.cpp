// Title: Cstring - strchar
// Purpose: Look for a character in a string and return its address
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices makes improvement

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::cerr;

int main()
{
    char userIn[20];
    char choice;
    cout << endl << " CString function - StrChar -" << endl;
    cout << "Input a string (<20 character):";
    cin >> userIn;
    cout << endl << "Your input is [ " << userIn << " ]" << endl;
    cout << "Would you like to locate a character in the string ? Y/N " << endl;
    cin >> choice;
    while(choice != 'N')
    {
        if(choice == 'Y')
        {
            char charChr;
            cout << "Input a character to lcoate: ";
            cin >> charChr;
            char* pos;
            pos = strchr(userIn,charChr);           // strhr return a pointer of a char if found, if not then returns nullptr
            if(pos == nullptr)
            {
                cout << charChr << " is not found in the string " << endl;
            } else
            {
                cout << charChr << " is found in the string at position with address " << &pos  << endl;
            }
        } else
        {
            cerr << "Invalid Input" << endl;
        }

        cout << "Would you like to locate a character in the string ? Y/N " << endl;
        cin >> choice;
    }



    return 0;
}
