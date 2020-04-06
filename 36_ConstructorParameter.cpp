#include <iostream>
using namespace std;

class Integer 
{
    public:
    int val;
    Integer(int v)
    {
        val = v; cout << "Constructor with arg " << v << endl;
    }
};

int main()
{
    Integer i(3);
}