#include <iostream>
using namespace std;

int main () {
    int a,b,m=0,n=0,t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a>b) m++;
        if (b>a) n++;
        else continue;
    }
    if (m>n) cout << "Mishka";
    if (n>m) cout << "Chris";
    if (n==m) cout << "Friendship is magic!^^";
}