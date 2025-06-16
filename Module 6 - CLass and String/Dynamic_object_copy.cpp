#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country; 
    int jersey;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
    
};
int main()
{
    Cricketer* masrafi = new Cricketer("Bangladesh", 10);
    Cricketer* tamim  = new Cricketer("Bangladesh", 20); 
    *masrafi = *tamim;
    delete tamim;
    cout << masrafi->jersey << " " << masrafi->country << endl;
     
    return 0;
}