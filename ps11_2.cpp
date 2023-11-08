#include <iostream>
using namespace std;
bool isin(int *arr, int n, int index){
    int p;
    for (p = 0; p<n; p++) {
        if (arr[p] == index) {
        return false;
        }
    }
    return true ;
}
int freq(int *arr, int val, int n) {
	int fcount = 0;
	for (int r = 0; r<n; r++) {
		if (arr[r] == val) fcount++;
	}
	return fcount;
}

int main() {
    int count=0;
    int oarr[100000];
    while(true) {
        int n;
        cin >> n;
        if (n==-1) break;
        else oarr[count] = n;
        count++;
    }
    int ahigh[10];
    int j[10];                                          // j stores the indexes of the largest element
    for (int l = 0; l<10; l++) { j[l]=-1;}              //initializing all elements of j to -1
    for(int i = 0; i < 10; i++) {ahigh[i] = oarr[i];}
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < count; i++) {
            if ((ahigh[k] <= oarr[i]) && (isin(j, 10, i))) {
                ahigh[k]=oarr[i];
                j[k] = i;
            }
        }

    }
    for (int m= 0; m<10; m++){
        if (*(ahigh+m) != *(ahigh+m+1)) {
            cout << *(ahigh+m) << " : " << freq(ahigh, *(ahigh+m), 10)<< endl;
        }
    }

}
