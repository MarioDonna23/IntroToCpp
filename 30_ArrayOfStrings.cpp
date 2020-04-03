#include <iostream>
using namespace std;

int main()
{
    const char *suitNames[] = {"Clubs", "Diamonds", "Spades", "Clubs"};
    cout << "Enter a Number (1-4)" << endl;
    unsigned int suitNum;
    cin >> suitNum;
    if(suitNum <= 3)
    {
        cout << suitNames[suitNum - 1];
    }
    else
    {
        cout << "Wrong Input";
    }
    
    return 0;
}