/*
Given a list of N integers, find its mean (as a double), maximum value, minimum value,
and range. Your program will first ask for N, the number of integers in the list, which the
user will input. Then the user will input N more numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << " Enter N : ";
    cin >> N;

    /* First Input*/
    int total = 0;
    cout << "Enter a Number: \n";
    cin >> total; 
    int MinVal = total;
    int MaxVal = total;

    for(int i=1; i<N; i++)
    {
        int num;
        cout << "Enter a Number: \n";
        cin >> num;

        total += num;

        if(num < MinVal)
        {
            MinVal = num;
        }
        if(num > MaxVal)
        {
            MaxVal = num;
        }
    }

    cout << "Mean: " << (double)total/N << "\n";
    cout << "Max: " << MaxVal << "\n";
    cout << "Min: " << MinVal << "\n";
    cout << "Range: " << (MaxVal - MinVal) << "\n";

    return 0;
}