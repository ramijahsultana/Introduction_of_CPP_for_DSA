#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
int main()
{
    
    Student*  p = new Student(5, 1, 5.00);
    Student rahim(5, 45, 3.5);
    
    cout << p->cls << " " << p->roll << " " << p->gpa << endl;
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}