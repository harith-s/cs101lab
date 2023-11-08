#include <simplecpp>
main_program {
	int year;
	cin >> year ;
	if (year % 100 != 0){ //if the year is divisible by 100 but not by 400, then the year is not counted as a leap year
		if (year % 4 == 0){
			cout << "Leap year";
		}
		else {
			cout << "not a Leap year";
		}
	}
	else {
		if (year % 400 == 0 ) {
			cout << "Leap year";
		}
		else {
                        cout << "not a Leap year";
                }
        }
	cout << endl;
}
	
