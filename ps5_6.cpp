#include <simplecpp>
main_program 
{
	int n;
	cin >> n;
	int sum = 1, i = 2;
	while (i < n) {
		if (n % i == 0) sum = sum + i;
		i++;
	}
	if (sum == n) cout << "perfect number";
	else cout << "not a perfect number";

}

		
