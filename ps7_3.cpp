#include <simplecpp>
bool pal(int a)
{	int reva = 0;
	int orga = a;
	while (a > 0) 
	{
		int temp = a % 10;
		reva = reva*10 + temp;
		a = a / 10;

	}
	return (reva == orga); 
}
main_program {
	int x;
	cin >> x;
	int i = x + 1;
	while (not (pal(i))) {
		i++;
	}
	cout << i;
}	
