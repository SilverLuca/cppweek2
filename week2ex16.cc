#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //initialize: inputs, idx and digits array
    size_t const radix = stoul(argv[1]);
    size_t value = stoul(argv[2]);
    size_t idx = 0;
    size_t digits[] = {};

    // prints first part of the sentence
    cout << value << ", displayed using radix "
	 << radix << " is: ";

    // loops until no more new digits are needed
    while(value > radix)
    {
	// fill array with remainder
	digits[idx] = value % radix;
	// modify value for next digit (floors value)
	value /= radix;
	++idx;
    }

    // fills the last required digit
    digits[idx] = value;

    // loop backwards over the array
    for (idx += 1; idx--;)
    {
	// check if number should convert to letter
        if(digits[idx] > 9)
	{
	    // converts 10 --> a etc using ascii
	    int letter = digits[idx] + 87;
	    cout << (char) letter;
	}
	else
	{
            cout << digits[idx];
	}
    }
    cout << '\n';
}
