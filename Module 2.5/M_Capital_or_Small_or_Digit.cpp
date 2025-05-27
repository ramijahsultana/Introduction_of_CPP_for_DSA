#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if(c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA\n" << "IS CAPITAL\n";
    }
    else if(c >= 'a' && c <= 'z')
    {
        cout << "ALPHA\n" << "IS SMALL\n";
    }
    else if(c >= '0' && c <= '9')
    {
        cout << "IS DIGIT\n";
    }
    return 0;
}