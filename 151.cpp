#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    // declare variables
    const int size = 10;
    string evens;
    string odds;

    // get user input and accumulate evens and odds
    cout << "Input " << size << " integers in the array:" << endl;
    for(int i=0; i<size; i++) {
        int num;
        cout << "array[" << i << "] : ";
        cin  >> num;

        if(num % 2 == 0)
            evens += to_string(num) + " ";
        else
            odds  += to_string(num) + " ";
    }

    // display evens
    cout << endl;
    if(!evens.empty()) {
        cout << "Even integers Found!" << endl;
        cout << "The Even integers are: " << endl << evens << endl;
    }
    else
        cout << "No Even integers found!" << endl;

    // display odds
    cout << endl;
    if(!odds.empty()) {
        cout << "Odd integers Found!" << endl;
        cout << "The Odd integers are: " << endl << odds << endl;
    }
    else
        cout << "No Odd integers found!" << endl;

    cout << endl;
    system("PAUSE");
    return 0;
}
