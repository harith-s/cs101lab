#include <simplecpp>
int numdig(int a) {
	int d = 0;
	//`if (a%10 == 0) d = 1;
	while (a>0) 
	{
		a= a /10;
		d+=1;
	}
	return d;
}
int main()
{
	int x, z; char y;
	cin >> x >> y >> z;
	if (y == '.') 
	{
	float out = x + z*pow(10, -numdig(z));
        cout << "number out is " << out << endl;	
	cout << out*out;
	return 0;
	}
	else cout << "invalid input";

}
