#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int x;
    cin>>x;
    string a= "I love", b= "I hate";
 
    for(int i= 0; i<x; i++){
        if(i&1){
            cout<< a<<" ";
        }
        else{
            cout<< b<<" ";
        }
 
        if(i != x-1) cout<< "that ";
    }
    cout<< "it"<<endl;
    return 0;
}
