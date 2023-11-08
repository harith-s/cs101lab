#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
template <T>
T pow(T a, T b){
    return(exp(b*log(a)));
}
int main() {
    cout << pow(2.0,3.0);
}