#include <iostream>
#include <cmath>
using namespace std;
int binsearch(int a[], int len, int x) {
    //assuming a is sorted
    int start = 0; int end = len;
    int mid; 
    while(true){
        mid = floor((start+end)/2);
        if (a[mid] == x) return mid;
        if ((start == mid) && (a[end]!= x)) return -1;
        else if (a[mid] > x)  end = mid;
        else if (a[mid] < x)start = mid;
    }


}
int main(){
    int array[]  = {1,2,3,4,5,6,7,8,9,10};
    int n;
    cin >> n;
    cout << binsearch(array, 10, n);
}