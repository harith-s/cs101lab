#include <simplecpp>
main_program {
	int n;
	cin >> n;
       //int i = 1;
	double sum, x, y, x1, y1;
	cin >> x >> y;
	x1 = x; y1 = y;
	/*while (i < n) {
		double xn, yn;
		cin >> xn >> yn;
		sum += sqrt(pow((x-xn),2) + pow((y-yn), 2));
		x = xn;
		y = yn;
		i +=1;
	}
	sum += sqrt(pow((x1-x),2) + pow((y1-y), 2));
	cout << sum;*/
	for (int i = 1; i < n; i++) {
		double xn, yn;
                cin >> xn >> yn;
                sum += sqrt(pow((x-xn),2) + pow((y-yn), 2));
                x = xn;
                y = yn;

	}
        sum += sqrt(pow((x1-x),2) + pow((y1-y), 2));
        cout << sum << endl;
}
			
