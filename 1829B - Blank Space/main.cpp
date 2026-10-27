#include <iostream>
using namespace std;

int main () {
    int n,t,a,c,cm;
    cin >> n;
    for (int i =0; i<n; i++) {
        cin >> t;
        cm=0;
        c = 0;
        for (int j=0;j<t;j++) {
            cin >> a;
            if (a==0) {
                c++;
                if (cm<c) {
                    cm = c;
                }
            }
            else c=0;
        }
        cout << cm << endl;
    }
}
    
