#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;				// initialize string to hold the prompt

    while(true)					// allows to input continuously
    {
        cout << "? ";				// 
        getline (cin, text);			//
        size_t count = text.length();		//

        if(count == 0)				//
            break;				//

	for(size_t idx = count ; idx--; )	//
	    cout << text.at(idx);		//

        cout << '\n';				//
    }
}
