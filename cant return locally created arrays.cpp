#include <iostream>
using namespace std;
int * hi(int a[], int n){
    int c[n];
    for (int i = 0; i < n; i++){
        c[i] = a[i];
    }
    return a;
}
int main() {
    int a[] = {1,2,3,4,5,6};
    int b[6];
    for (int i = 0; i < 6; i++) {
        b[i] = hi(a, 6)[i];
    }
    for (int i = 0; i < 6; i++) cout << b[i] << ", ";

    cout << endl;


}