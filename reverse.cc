#include <iostream>
#include <string>

using namespace std;

int main()
{
    // sting to hold the input
    string text;

    // allows continuous input
    while (true)
    {
	// prompts user to type
        cout << "? ";
	// input --> text string
        getline (cin, text);
	// stores lenght of text
        size_t const count = text.length();

	// check for empty promt
        if (count == 0)
            break;

	// prints text in reverse
	for (size_t idx = count ; idx--; )
	    cout << text.at(idx);

        cout << '\n';
    }
}
