#include <simplecpp>
main_program {
        int miles, furlong, yard, feet, inches;
        miles = furlong = yard = feet = inches = 0;
        cin >> inches ;
        miles = inches / 63360;     //1 mile equals 8 furlongs, 1 furlong equals 220 yards, 1 yard equals 3 feet, and 1 foot equals 12 inches
	inches = inches % 63360;    // d=(((8v+w(220+x)3+y)12+z, and w < 8, x < 220, y < 3, z < 12
        furlong = inches / 7920;
        inches = inches % 7920;
        yard = inches / 36;
        inches = inches % 36;
        feet = inches / 12;
        inches = inches % 12;
        cout << miles << " " << furlong << " " << yard << " " <<  feet << " " <<  inches  << endl;
}                                                                               
