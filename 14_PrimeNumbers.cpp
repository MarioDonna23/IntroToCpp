/* Write a program to read a number N from the user and then find the first N primes. A
prime number is a number that only has two divisors, one and itself.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: \n";
    cin >> N;

    for(int i=2; N>0; ++i)
    {
        bool isPrime = true;
        for(int j=2; j<i; ++j)
        {
            if(i%j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            --N;
            cout << i << "\n";
        }
    }
    return 0;
}