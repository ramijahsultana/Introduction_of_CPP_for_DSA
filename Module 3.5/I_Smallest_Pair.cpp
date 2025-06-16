#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; i <n; j++)
            {
                int val = a[i] + a[j] + (j - i);
                mn = min(mn, val);
            }
        }
        cout << mn << endl;
    }

    return 0;
}