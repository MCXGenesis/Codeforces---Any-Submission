#include <iostream>
using namespace std;

int main () {
    int a,b,i=1;
    cin >> a >> b;
    while(a*3 <= b*2) {
        i++;
        a=a*3;
        b=b*2;
    }
    cout << i;
}