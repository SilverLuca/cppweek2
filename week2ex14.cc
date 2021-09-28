#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;							// increaments argv

    size_t lines = pow(2, argc - 1);				// calculates the amount of lines neccesary

    for(size_t idx = 0; idx != lines; ++idx)			// for loop of the lines
    {
	cout << idx + 1 << ":";					// prints "n:" for each line

	for(int bit = 0, digit = idx; bit != argc - 1; ++bit)	// for loop over binary digits
	{
	    if((digit & 1) == 1)				// checks if the first bit is set
	    {
		cout << " " << argv[bit];			// prints the outputs according to the active bits
	    }
		digit = digit >> 1;				// shifts bits right to evaluate next bit
	}
	cout << '\n';						// ends each line
    }
}
