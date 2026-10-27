#include <iostream>
using namespace std;

int main() {
    int t,x;
    cin >> t;
    for (int i=0;i<t;i++) {
        cin >> x;
        if (x<=1399) cout << "Division 4" << endl;
        if ((x>=1400) and (x<=1599)) cout << "Division 3" << endl;
        if ((x>=1600) and (x <= 1899)) cout << "Division 2" << endl;
        if (x>=1900) cout << "Division 1" << endl;
    }
}
