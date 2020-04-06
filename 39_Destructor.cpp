#include <iostream>
using namespace std;

class Point
{
    public:
        int x,y;
        Point()
        {
            cout << "Constructor Invoked" << endl;
        }
        ~Point()
        {
            cout << "Destructor Invoked" << endl;
        }
};

int main()
{
    Point *p = new Point;
    delete p;
    return 0;
}