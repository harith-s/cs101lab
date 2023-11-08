#include <simplecpp>
main_program {
        float x = 0;
        float pdt = 1;
        cin >> x ; //number of terms
        double esum = 1;
        float fact =1, i = 2;
        repeat(15) {
                pdt = pdt * x;
                esum = esum + (pdt/fact);
                fact = fact * i; // fact is for storing the factorial and i is for storing the number to be multiplied next
                i++; //post increment notation i.e does i=i+1
        }
        cout << esum << endl;
}
