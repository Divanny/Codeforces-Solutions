
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int a = 1; a <= 5; ++a)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(a - 3) << endl;
            }
        }
    }
    return 0;
}