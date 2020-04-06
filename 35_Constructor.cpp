#include <iostream>
using namespace std;

class Integer
{
    public:
        int val;
        Integer()
        {
            val = 0; 
            cout << "Default Constructor" << endl;
        }
};

int main()
{
    Integer i;
    return 0;
}