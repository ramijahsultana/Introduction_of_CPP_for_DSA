#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool is_palindrome = true;
    for (int i = 0, j = n - 1; i <= n / 2, j > i; i++, j--)
    {

        if (a[i] != a[j])
        {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}