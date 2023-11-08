#include <iostream>
#include <cstring>
using namespace std;
void f(char * str, char * revstr){
    const int l = strlen(str);
    for (int i = 0; i < l; i++){
            revstr[i] = str[l-1-i];

   }
   

}
int main() {
        char str[100]; char revstr[100];
        cin >> str;
        f(str, revstr);
        cout << revstr;
}
