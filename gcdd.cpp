#include <iostream>
int gcd(int m, int n)
{
        if (m<n) {
                int temp = m;
                m = n; n = temp;
        }
        if (m%n ==0) return n;
        else return gcd(n, m%n);

}

