#include <iostream>
#include <cmath>
using namespace std;
bool f2 (int n) {
    switch(n) {
        case 11 :
            cout <<"eleven ";
            break;
        case 12:
            cout <<"twelve ";
            break;
        case 13:
            cout <<"thirteen ";
            break;
        case 14:
            cout <<"fourteen ";
            break;
        case 15:
            cout <<"fifteen ";
            break;
        case 16:
            cout <<"sixteen ";
            break;
        case 17 : 
            cout <<"seventeen ";
            break;
        case 18:
            cout <<"eighty ";
            break;
        case 19:
            cout <<"nineteen ";
            break;
    }
    return false;
        

    

    
}
bool f(int n, int i){
    
    switch(n) {
        case 1 :
            if (i==2) return false;
            else cout <<"one ";
            return true;
            
        case 2:
            if (i==2) {cout<< "twenty "; return true;}
            else cout <<"two ";
            return true;
        case 3:
            if (i==2) {cout<< "thirty "; return true;}
            else cout <<"three ";
            return true;
        case 4:
            if (i==2) {cout<< "forty "; return true;} 
            else cout <<"four ";
            return true;
        case 5:
            if (i==2) {cout<< "fifty "; return true;}
            else cout <<"five ";
            return true;
        case 6:
            if (i==2) {cout<< "sixty "; return true;}
            else cout <<"six ";
            return true;
        case 7 : 
            if (i==2) {cout<< "seventy "; return true;}
            else cout <<"seven ";
            return true;
        case 8:
            if (i==2) {cout<< "eighty "; return true;}
            else cout <<"eight ";
            return true;
        case 9:
            if (i==2) {cout<< "ninety "; return true;}
            else cout <<"nine ";
            return true;
        default: 
            return true;
        

}


}
int main() {
    int n;
    cin >> n;
    int d = 1;
    while (true) {
        if (n < pow(10, d)) break;
        d++;
    }
    while(n>0) {
        int a = f(n/((int(pow(10, d-1)))), d % 3);

        if (not(a)) { 
            f2(n/(int((pow(10, d-2)))));
            n = n % (int(pow(10, d-2)));
            if (d % 3 == 0) cout << "hundred ";
            if (d==5) cout << "thousand ";
            if (d == 8) cout << "million ";
            d = d - 2;
        }

        else {
            n = n % (int((pow(10, d-1))));
            if (d % 3 == 0) cout << "hundred ";
            else if (d==4) cout << "thousand ";
            else if (d == 7) cout << "million ";
            d--;
        }
    }
}

