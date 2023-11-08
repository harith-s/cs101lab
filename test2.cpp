#include <simplecpp>
main_program { 
	int count, sum = 0, n;
	char resp;
	do {
		cin >> n;
		sum = sum + n;
		count +=1;
		cin >> resp;
	}
	while (resp == 'y');

	cout << float(sum)/count << endl;
}
