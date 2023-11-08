#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[5]; char str2[6]; char str3[4];
    cin >> str1 >> str2 >> str3;
    strcpy(str2, str3);
    cout << str3 << "  " << str2;
    strcpy(str2, str1);
    cout << str1 << "  " << str2;
}