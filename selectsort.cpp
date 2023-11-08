#include <iostream>
using namespace std;
void selectionSort (int data[], int n) {
    for (int i = n; i > 0; i --) {
        int imax = 0;
        for (int j = 0; j < i; j++) {
            if ( data[j] > data[imax]) imax = j;
        }
        int temp = data[i-1];
        data[i-1] = data[imax];
        data[imax] = temp;
    }
}
int main() {
    int a[] = {1,3,4,5,43,1,3,34,5,30};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i ++) {cout << a[i] << ' ';}
}