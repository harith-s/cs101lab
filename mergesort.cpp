#include <iostream>
using namespace std;
int * mergediv(int a[], int len);
int* mergesort(int a[], int b[], int c[], int n);
void print(int a[], int n){
    for (int i = 0; i < n; i++) cout << a[i] << ", ";
    cout << endl;
}

int * mergediv(int a[], int len){
    if (len == 2) {
            if (a[0] > a[1]){
                int temp = a[0];
                a[0] = a[1]; a[1] = temp;
            }
            return a;
            
    }
    else if (len == 1) return a;
    else {
        int n = len;
        int b[n/2], c[n - n/2];
        for (int i = 0; i< n/2; i++) { b[i] = a[i];}
        for (int i = 0; i < n-n/2; i++) { c[i] = a[n/2+i]; }
        return mergesort(mergediv(b, n/2), mergediv(c, n- n/2), a, n);
        

    }
}


int * mergesort(int a[], int b[], int c[], int n){
    int i= 0; int j = 0;
    for (int k = 0; k < n; k++){
        if ((i < n/2) && (j < n-n/2)){
            if (a[i] < b[j]){
                c[k] = a[i]; i++;
            }
            else {
                c[k] = b[j]; j++;
            }
        }
        else if (i < n/2){
                c[k] = a[i]; i++;          
        }
        else if (j < n - n/2) {
            c[k] = b[j]; j++;
        }
    }
    return c;
}


int main() {
    int n; cin >> n; const int k = n;
    int array [k];
    for (int p = 0; p < k; p++){
        array[p]=rand()%100;
    }
    cout << "before sorting : " ; print(array,n);
    mergediv(array, n);
    cout << "after sorting : " ; print(array, n);
    cout << endl;
}