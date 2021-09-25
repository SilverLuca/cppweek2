#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t table_number = stoul(argv[1]);	// converts first argument to interger (base 10)

    for(size_t idx=1; idx != 11; ++idx)		// starts for loop from 1 to 10
    cout << idx << " * " << table_number
    << " = " << table_number * idx << '\n';	// outputs disired text
}
