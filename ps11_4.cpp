#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
struct point{
    double x, y;
    point(double a = 0, double b = 0) : x(a), y(b){}
    double slope(const point & b){
        return atan((y - b.y)/(x - b.x));
    }

};
ostream & operator << ( ostream & ost, point const  & b){
    ost << "(" << b.x  << ", " << b.y << ")" << " ";
    return ost;
}
int main() {
    cout << "enter the number of points : ";
    int n; cin>> n;
    const int k = n;
    point a[k];
    int f = 0;
    srand(time(0));
    for (int i = 0; i < k; i++){
        a[i].x = rand() % 10;
        a[i].y = rand() % 10;
    }
    bool collinear = false;
    for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            for (int l = 0; l < k; l++){
                if ((i!=j) && (j!=l) && (l!=i)){
                    if ((a[i].slope(a[j])) == (a[i].slope(a[l]))) {
                        cout << "here";
                        cout << a[i] << a[j] << a[l] << "are collinear"; 
                        cout << endl;
                        collinear = true; 
                        break;
                    }
                }

            }
            if (collinear) break;
        }
        if (collinear) break;
        
    } 
    if (collinear) cout << "some points are collinear!!!!!!!";
    else cout << "none are collinear";
}