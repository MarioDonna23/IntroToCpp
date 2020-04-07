#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    int x;
    source >> x; //Reads one int from source-file.txt
    source.close();
    destination << x; //Writes x to dest-file.txt
    return 0;
}