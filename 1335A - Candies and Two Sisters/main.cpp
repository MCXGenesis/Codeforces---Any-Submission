#include <iostream>
using namespace std;

int main () {
    int a,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a<3) {
            cout << 0 << endl;
            continue;
        }
        if (a%2==0) cout << a/2-1 << endl;
        if (a%2==1) cout << a/2 << endl;
    }
}