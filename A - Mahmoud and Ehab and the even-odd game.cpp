#include<iostream>
 
using namespace std;
 
int main()
{
    int a, b, operacion, operacion2;
    bool check = false;
    while (check = true) {
            cin >> a;
            operacion = a%2;
            if (operacion != 0){
                cout << "Ehab";
                check = true;
                break;}
            cin >> b;
            operacion2 = b%2;
            if (operacion2 == 0){
                cout << "Mahmoud";
                check = true;
                break;}
 }
    return 0;
    }
 