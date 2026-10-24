#include <iostream>
using namespace std;

int main () {
    int n,c,cc=0,p=0;
    cin >> n;
    for (int i =0; i<n; i++) {
        cin >> c;
        if (c==-1 and p==0) cc++;
        if (c>=1) p+=c;
        if (c==-1 and p>0) p--;
    }
    cout << cc;
}
    