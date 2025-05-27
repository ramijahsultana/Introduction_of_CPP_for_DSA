#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char s[100];
    cin.ignore(); // To ignore the newline character left in the input buffer after reading x
    // cin >> s;
    cin.getline(s, 100);
    cout << x << endl << s << endl;

    return 0;
}