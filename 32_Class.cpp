#include <iostream>
using namespace std;

class MITStudent
{
    public:
        char *name;
        int studentID;
};

int main()
{
    MITStudent student1;
    MITStudent student2;

    student1.name = "Mario";
    student1.studentID = 226091;

    student2.name = "Caro";
    student2.studentID = 232323;

    cout << "Student 1 name is: " << student1.name << endl;
    cout << "Student 1 ID is: " << student1.studentID << endl;
    cout << "Student 2 name is: " << student2.name << endl;
    cout << "Student 2 ID is: " << student2.studentID << endl;

    return 0;
}

