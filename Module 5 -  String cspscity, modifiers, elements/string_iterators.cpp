#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    for(string:: iterator it = s.begin(); it<s.end(); it++)
    {
        cout << *it << endl;
    }
    // for(auto it = s.begin(); it<s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    return 0;
}