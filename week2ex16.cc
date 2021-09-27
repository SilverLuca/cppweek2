#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t radix = stoul(argv[1]);			// initialize first input as radix
    size_t value = stoul(argv[2]);			// initialize second input as value
    size_t idx = 0;					// initialize idx to loop back and forth
    size_t digits[] = {};				// initialize digits array

    cout << value << ", displayed using radix "
	<< radix << " is: ";				// prints the first part of the sentence

    while(value > radix)				// loops until no more new digits are needed
    {
	digits[idx] = value % radix;			// fills digits array with the remainder
	value =  value / radix;				// getting ready for the next digit (floors the value)
	++idx;						// increases index
    }

    digits[idx] = value;				// fills the last required digit

    for (idx = idx+1; idx--;)				// loops back over the entries in the array
        if(digits[idx] > 9)				// check if a number should convert to a letter
	{
	    int letter = digits[idx] + 87;		// ewww magic number
	    cout << (char) letter;			// prints the letter
	}
	else
	{
            cout << digits[idx];			// prints the number
	}

    cout << '\n';					// ends the line
}

