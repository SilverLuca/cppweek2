#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // converts input to integer
    size_t const table_number = stoul(argv[1]);

    for (size_t idx=1; idx != 11; ++idx)
	// outputs disired text
	cout << idx << " * " << table_number
	<< " = " << table_number * idx << '\n';
}
