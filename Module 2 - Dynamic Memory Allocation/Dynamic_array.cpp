#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;   
    cin >> n; 
    // int a[n];  // static array
    int* a = new int[n];   // dynamic array
    for(int i = 0; i<5; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
