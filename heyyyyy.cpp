#include <iostream>
#include "ps15_2comp.h"
using namespace std;
int main(){
    char command;
    comp a, b;
    cin >> a >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b<< endl;
    cout << "enter command";
    cin >> command;
    comp temp;
    switch(command) {
        case 'a' :
            temp = a + b;
            cout << temp << endl;
            break;
        case 's':
            temp = a - b;
            cout << temp << endl;
            break;
        case 'm':
            temp = a * b;
            cout << temp << endl;
            break;
        case 'd':
            temp = a / b;
            cout << temp << endl;
            break;
        default :
            cout << "not a valid input (a/s/m/d)";
    }   
}