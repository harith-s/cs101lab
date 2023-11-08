#include <simplecpp>

float asinn(float x, float epsilon) {
	float xn= 0.1;
	if (abs(x)<=1) {
		while (abs(sin(xn) - x) >= epsilon) {
			xn = xn - sin(xn)*(sqrt(1-xn*xn));
			cout << xn ;
			int n; cin >> n;
			
		}
	}
	else {
		cout << "enter a valid value";
		float newx; cin >> newx;
		asinn(newx, epsilon);
	}
	return xn;
}
int main() {
	int n;
	cin >> n;
	cout << asinn(n, 0.0001) << endl;
	return 0;
}
