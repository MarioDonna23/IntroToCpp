#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main()
{
    int val = fibonacci(23);
    cout << "The fibonacci of 23 is: " << val << endl;
    return 0;
}