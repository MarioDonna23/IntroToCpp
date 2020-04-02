#include <iostream>
using namespace std;

void printOnNewLine(int x)
{
    cout << "Integer: " << x << endl;
}

void printOnNewLine(char *x)
{
    cout << "String: " << x << endl;
}

int main()
{
    printOnNewLine(23);
    printOnNewLine("Hola Mario");
    return 0;
}
