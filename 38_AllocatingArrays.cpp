#include <iostream>
using namespace std;

int main()
{
    int numItems;
    cout << "How many items? ";
    cin >> numItems;
    int *arr = new int[numItems];

    for(int i=0; i<numItems; ++i)
    {
        cout << "Enter item: " << i << ": ";
        cin >> arr[i];
    }

    for(int i=0; i<numItems; ++i)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
}