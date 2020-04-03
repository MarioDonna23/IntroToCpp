#include <iostream>
using namespace std;

int main()
{
    long arr[] = {6,0,9,6};
    long *ptr = arr;

    cout << "The first element is: " << *ptr << endl;
    ptr++;
    cout << "The second element is: " << *ptr << endl;
    ptr++;
    cout << "The third element is: " << *ptr << endl;
}