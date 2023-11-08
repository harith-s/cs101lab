#include <simplecpp> 
int f (float x,float y,float z,float k) 
{ 		cout << pow (x,k) ;
		cout << pow (y,k) ;
		cout << pow (z,k) ;
	       return  pow((pow (x,k) + pow (y,k) + pow (z,k) ),(1.0/k)) ;
	       

}
int main() {
	float x,y,z,k ;
	cout << "type the values of x,y,z" ;
	cin >> x >> y >> z ;
	cout << "will you give value of k ? type y/n" ;
	char d ;
	cin >> d ;
        if ( d=='y') cin >> k ;
	if ( d=='n') k=2 ;
	cout << f(x,y,z,k) ;
}
