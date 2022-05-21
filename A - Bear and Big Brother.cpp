#include <bits/stdc++.h>

using namespace std;

int main (){

    int a,b;

    cin >> a >> b;
    int tiempo = 0;

        while (a <= b)
        {
            a = 3*a;
            b = 2*b;

            tiempo++;
        }

        cout << tiempo << endl;
    return 0;
}
