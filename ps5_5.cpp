#include <simplecpp>
bool prime(int a) 
{ 
	int d = 2; int f = 0;
	while (d <= sqrt(a)) 
	{
		if (a % d == 0) 
		{ 	
			f = 1;
			break;
		}
		d++;
	}

	if (f==1) return False;
	else return True;

}
main_program
{	
	int n;
	cin >> n;
	int a = 2;
	while (a <=n) {
		if (prime(a)) cout << a << ", ";
		a++;
	}
}


