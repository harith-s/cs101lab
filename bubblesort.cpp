#include <iostream>
#include <cstdlib>
using namespace std;
void bubblesort(int a[], int n){
    int i = n-1;
    int index = 0;
    bool sorted = false;
    //for (int i = n-1; i > 0; i--){
    while(not(sorted)) {
        for (int j = 0; j < i; j++){
            if (a[j] > a[j+1]){
                int temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
                index = j;
            }
        }
        i = index;
        if (i == 1) sorted = true;
    }
}
void print(int a[], int n){
    for (int i = 0; i < n; i++) cout << a[i] << ", ";
    cout << endl;
}
int main() {
    int n; cin >> n; const int k = n;
    int array [k];
    for (int p = 0; p < k; p++){
        array[p] = rand()%100;
    }
    cout << "before sorting : " ; print(array,n);
    bubblesort(array, n);
    cout << "after sorting : " ; print(array, n);
    cout << endl;
}