#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    int const number = stoul(argv[1]);
    size_t const length = 8 * sizeof(number);
    // makes binary string of the correct length
    string const binary = bitset<length>(number).to_string();

    // prints first part of output
    cout << number << " = " << binary  << " = ";

    // checks special case number = 0
    if(number != 0)
    {
	for(size_t idx = 0, first = 0; idx != length; ++idx)
	{
	    // checks if number has a 1 at pos idx (in binary)
	    if(binary[idx] == '1')
	    {
		// check if this is the first number to print
		if(first == 0)
		{
		    // output correct power of 2
		    cout << (1 << (length - idx - 1));
		    // next 1 will not be the first
		    ++first;
		}
		else
		    // outputs + and the correct power of 2
		    cout << " + " << (1 << (length - idx - 1));
	    }
	}
    }
    else
	cout << 0;
    cout << '\n';
}
