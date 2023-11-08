#include <iostream>
#include <cstring>
using namespace std;
char* lexicomp(char a[], char b[]){
    int i = 0;
    while (true){
        if (a[i]>b[i]) return a;
        else if (a[i]<b[i]) return b;
        if (a[i]== 0 && b[i] == 0) return a;
        else if (a[i] == 0) return b;
        else if (b[i]==0) return a;
        i++;

        
        }
    }
int main() {
    char a[10] = "orange";
    char b[10] = "oranl";

    cout << lexicomp(a,b);
}