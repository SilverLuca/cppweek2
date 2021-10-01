#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    int const number = stoul(argv[1]);
    size_t const length = 8 * sizeof(number);
    string const binary = bitset<length>(number).to_string();

    cout << number << " = " << binary  << " = ";		// prints first part of output

    for(size_t idx = 0, first = 0; idx != length; ++idx)
    {
	if(binary[idx] == '1')					// checks if number has a 1 at pos idx
	{
	    if(first == 0)					// checks if this will be the first number to print
	    {
		cout << (1 << (length - idx - 1));		// outputs the correct power of 2
		++first;					// causes next positive to not go in this if statement
	    }
	    else
	    cout << " + " << (1 << (length - idx -1));		// outputs + and the correct power of two
	}
    }
    cout << '\n';
}
