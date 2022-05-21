#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, i;
    bool check = false;
    cin >>n;
    for (int a=0; a<n; a++) {
        cin >> i;
        if (i==1){check = true;}
    }
    if(check){cout << "HARD";}
    else{cout << "EASY";}
    return 0;
    }