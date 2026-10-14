#include <iostream>
using namespace std;

int main () {
    int c=1,t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t-1; i++)
    {
        if (arr[i] != arr[i+1]){
            c++;
        }
    }
    cout << c;
}