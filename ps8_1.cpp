#include <simplecpp>
float norm(float x, float y, float z, float k) {
	return pow((pow(x,k) +pow(y,k) + pow(z,k)), 1/k);
}
float choice(char resp) {
	if (resp == 'y') {
		float k1;
		cin >> k1;
		return k1; //function to return 2 if the user wishes to omit and takes the value if needed
	}
	else return 2.0;
}

main_program {
	float x, y, z;
	char resp;
	cin >> x >> y >> z;
	cin >> resp;
	cout << norm(x, y, z, choice(resp));
}

