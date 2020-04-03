#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // Set the seed
    int randNum = rand();
    cout << "Random Number: " << randNum << endl;
    return 0;
}
