#include <bits/stdc++.h>
 
using namespace std;
 
int n, r, x, f, y;
int main()
{
    cin >> n;
    while (n--) {
        cin >> x >> r;
        if (x > r) {
            f++;
        } else if (r > x) {
            y++;
        }
    }
    if (f > y) {
        cout << "Mishka";
    } else if (y > f) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
 
 
}