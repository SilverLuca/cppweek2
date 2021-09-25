#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    size_t radix = stoul(argv[1]);
    size_t value = stoul(argv[2]);
    size_t idx = 0;
    size_t digits[] = {};

    cout << value << ", displayed using radix " << radix << " is: ";

    while(value > radix)
    {
	digits[idx] = value % radix;
	value =  value / radix;
	++idx;
    }

    digits[idx] = value;

    for (idx = idx+1; idx--;)
        cout << digits[idx];
    cout << '\n';
}
