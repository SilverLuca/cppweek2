#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;
    // calculates the amount of lines neccesary
    size_t const lines = (1 << (argc - 1));

    // loop over the lines
    for(size_t idx = 0; idx != lines; ++idx)
    {
	// prints "n:" for each line
	cout << idx + 1 << ":";

	// loop over binary digits
	for(int bit = 0, digit = idx; bit != argc - 1; ++bit)
	{
	    // check if bit is set
	    if(digit & 1)
		// yes? print corresponding word
		cout << " " << argv[bit];
	    // go to next bit
	    digit >>= 1;
	}
	// ends each line
	cout << '\n';
    }
}
