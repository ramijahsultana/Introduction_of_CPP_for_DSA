#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    // s.clear();
    // cout << s << endl; 
    cout << s.size() << endl;
    if(s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    s.resize(6);
    cout << s << endl; 
    return 0;
}