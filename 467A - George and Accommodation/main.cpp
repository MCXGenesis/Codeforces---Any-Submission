#include <iostream>
using namespace std;

int main () {
    int a,b,n=0,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if ((b-a)>=2) n++;
        else continue;
    }
cout << n;
}