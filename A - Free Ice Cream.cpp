#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
long long a, b, d, x=0;
string s;
cin >> a >> b;
for (int i = 0; i < a; i++){
    cin >> s;
    cin >> d;
    if (s=="-"){
        if (b-d>=0){
            b=b-d;
        }
        else {
            x=x+1;
        }
    }
    if (s=="+"){
        b=b+d;
    }
}
cout << b << " " << x;
return 0;
}