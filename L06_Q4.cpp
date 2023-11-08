#include <simplecpp>
main_program {
        srand(time(0));
        int a[6];
        repeat(100) {
                int i = floor(randuv(1,7));
		a[i-1]++;
		cout << i << ' ';

        }
        cout << endl;
	for (int j = 0; j < 6; j++) {
		cout << "number of " << (j+1) << " : " << a[j] << endl;
        }
}
