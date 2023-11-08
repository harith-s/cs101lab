#include <simplecpp>
main_program {
	cout << "Program to convert inches to miles, furlongs, yards and feet" << endl;
	int miles, furlong, yard, feet, inches;
	miles = furlong = yard = feet = inches = 0;
	cout << "enter the distance in inches :" << endl;
	cin >> inches ;
	miles = inches / 63360;
	inches = inches % 63360;
	furlong = inches / 7920;
	inches = inches % 7920;
	yard = inches / 36;
	inches = inches % 36;
	feet = inches / 12;
	inches = inches % 13;
	cout << miles << " miles, " << furlong << " furlongs, " << yard << " yards, " << feet << " feet, " << inches << " inches, " << endl;
}	
