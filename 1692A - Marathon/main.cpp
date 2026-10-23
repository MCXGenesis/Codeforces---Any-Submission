#include <iostream>
using namespace std;

int main () {
    int a,b,c,d,z,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        z=0;        
        cin >> a >> b >> c >> d;
        if (a<b) z++;
        if (a<c) z++;
        if (a<d) z++;
        cout << z << endl;
    }
}