#include <iostream>
#include <cstring>
using namespace std;
int strtoint(char * a){
        int l = strlen(a);
        int result = 0;
        for (int i = 0; i < l; i++) {
            int d = int (a[i] - '0');
            result = result*10 + d;

        }
    return result;

}
int main() {
    char text[1000];
    cin >> text;
    
    cout << strtoint(text) << endl;
    
}
 