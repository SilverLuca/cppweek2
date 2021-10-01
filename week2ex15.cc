#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;				// initialize string to hold the prompt

    while(true)					// allows to input continuously
    {
        cout << "? ";				// gives the prompt to write
        getline (cin, text);			// puts the input into the text string
        size_t const count = text.length();	// counts the amount of characters written

        if(count == 0)				// checks if promt is empty
            break;				// yes? stop the program

	for(size_t idx = count ; idx--; )	// loop to work backwards through the string
	{
	    if(text[idx] >> 7)
	    {
		idx--;
		if((text[idx] >> 6) == 2)
		{
		    idx--;
		    if((text[idx] >> 6) == 2)
		    {
			idx--;
			cout << text[idx] << text[idx + 1] << text[idx + 2] << text[idx + 3];
		    }
		    else
		    cout << text[idx] << text[idx + 1] << text[idx + 2];
		}
		else
		cout << text[idx] << text[idx + 1];
	    }
	    else
	    cout << text[idx];		// prints the text in reverse
	}

        cout << '\n';				// end the line
    }
}
