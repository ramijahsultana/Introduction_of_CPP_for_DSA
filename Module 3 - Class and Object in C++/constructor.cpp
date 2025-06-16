#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};
int main()
{
    Student karim(5, 1, 5);
    Student rahim(5, 45, 3.5);
    
    cout << karim.cls << " " << karim.roll << " " << karim.gpa << endl;
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}