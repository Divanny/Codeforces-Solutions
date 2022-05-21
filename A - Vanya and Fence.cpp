#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, h, a, suma = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > h) {
            suma++;
        }
        suma++;
    }
    cout << suma;
}