#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    Student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "hello from " << name << endl;
    }

};
int main()
{ 
    Student rakib("Rakib Hossain" , 15);
    rakib.hello();
    Student raha("Raha Sultana",14);
    raha.hello();
   
    return 0;
}