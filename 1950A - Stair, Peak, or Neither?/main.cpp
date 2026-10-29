#include <iostream>
using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a >> b >> c;
        if (a<b and b<c) cout << "STAIR" << endl;
        else if (a<b and b>c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
}
