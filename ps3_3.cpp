#include <simplecpp>
main_program {
        int n; double x;
        cout << " Give the degree of the polynomial and the value of x : ";
        cin >> n >> x;
        int i = n;
        double sum = 0;
        repeat(n+1) {
                float coeff;
                cout << "Starting from the highest degree term, enter the value of coefficient of " << i  << "th term ";
                cin >> coeff;
                sum = sum + coeff * pow(x, i);
                i = i - 1;
        }
        cout << sum << endl;
}  
