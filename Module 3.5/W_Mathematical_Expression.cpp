#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s;
    char q = '=';
    cin >> a >> s >> b >> q >> c;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    if(s == '+')
    {
        if(sum == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    if(s == '-')
    {
        if(sub == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sub << endl;
        }
    }
    if(s == '*')
    {
        if(mul == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << mul << endl;
        }
    }

    return 0; 
}