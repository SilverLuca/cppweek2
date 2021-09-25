#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string text;				// Initializes output string

    for(int idx = 0; idx != 128; ++idx)		// loops throug all 128 ascii values
    {
	if(isalpha((char) idx) != 0)		// checks if idx corresponds to an alphabetic ascii value
	    text = text + (char) idx;		// if yes, add that ascii character to the string
    }
    cout << text << '\n';			// outputs all alphabetic characters
}
