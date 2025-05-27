#include<bits/stdc++.h>
using namespace std;
int* p;
// void fun() // static 
// {
//     int x = 10;
//     p = &x;
//     cout << "fun -> " << *p << endl;

// }
void fun()  // dynamic
{
    int* x = new int;
    *x = 10;
    p = x;
    cout << "fun -> " << *p << endl;
}


int main()
{
    fun();
    cout << "main -> " << *p << endl;
    return 0;
}