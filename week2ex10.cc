#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    // Initializes output string
    string text;

    // loops throug all 256 ascii values
    for(int idx = 0; idx != 256; ++idx)
    {
	// check if idx in ascii is alphabetic
	if(isalpha((char) idx) != 0)
	    // if yes, add that ascii character to the string
	    text += (char) idx;
    }
    cout << text << '\n';
}
