#include <iostream>
using namespace std;

int main () {
    int n,a,b,c=0,m=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = c-a+b;
        if (m<c) m=c;
    }
    cout << m;
}
    