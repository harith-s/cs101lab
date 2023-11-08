#include <iostream>
#include <cstring>
using namespace std;
bool lexicomp(char a[], char b[]);

void selectionSort (char data[][100], int n) {
    for (int i = n; i > 0; i--) {
        int imax = 0;
        for (int j = 0; j < i; j++) {
            if (lexicomp(data[j], data[imax])) imax = j;
        }
        char temp[100];
        strcpy(temp, data[i-1]);
        strcpy(data[i-1], data[imax]);
        strcpy(data[imax], temp);
        
    }
}

bool lexicomp(char a[], char b[]){
    int i = 0;
    while (true){
        if (a[i]>b[i]) return true;
        else if (a[i]<b[i]) return false;
        if (a[i]== 0 && b[i] == 0) return true;
        else if (a[i] == 0) return false;
        else if (b[i]==0) return true;
        i++;
    }
}

int main() {
    int n; cin >> n;
    cin.ignore();
    const int k = n;
    char astring[k][100];
    for (int i = 0; i < n; i++){
        cin.getline(astring[i], 100);
    }
    selectionSort(astring, k);
    for (int i = 0; i < n; i++){  cout << astring[i] << endl ;}
    cout <<endl;

}