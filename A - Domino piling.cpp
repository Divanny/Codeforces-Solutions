#include <bits/stdc++.h>
 
using namespace std;
 
int main ()
{
    int m, n, c, d = 0;
    cin >> m >> n;
    c = m * n;
    if (c % 2 == 1)
    {
        cout << c / 2;
    }
    else
    {
        if (c % 2 == 0)
        {
            cout << c / 2;
        }
  