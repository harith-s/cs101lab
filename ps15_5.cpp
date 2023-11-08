#include <iostream>
using namespace std;
struct v3{
    double x, y, z;
};
istream & operator>> (istream & ist, v3 &a){
    ist >> a.x >> a.y >> a.z;
    return ist;
}
int main() {
    v3 point;
    cin >> point;
    cout << point.x << point.y << point.z;
}