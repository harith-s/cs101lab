#include <simplecpp>
main_program {
        float x;
        cin >> x;
        float sum = 0;
        for (int i = 100; i <=x*100; i++) {
                sum = sum + 0.5*((1.0/i) + (1.0/(i-1)));
        }
        cout << sum;
}
  
