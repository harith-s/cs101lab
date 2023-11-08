#include <simplecpp>
int alen(int a[], int n) { 							//returns length of the array excluding the negative numbers
	for (int i = 0; i < n; i++) {
		if (a[i] == -1) return i;
	}
	return n;
}
int main() {
	int n;
	cin >> n;
	const int k = n + 1;
	int a[k];
	for (int j =0; j<k; j++) {a[j] = -1;}
	int i = 0;
	int t; cin >> t;
	a[0] = t;
	repeat(n-1) {
		cin >> t;
		i = alen(a,k) - 1;
		while (i >= 0){
			if (a[i] < t) break;
			i--;
		}
		while (t != -1) {
			int temp = a[i+1];
			a[i+1] = t;
			t = temp;
			i++; 
		}
	}
	for (int p = 0; p < n; p++) { cout << a[p] << " ";}

}	





		

