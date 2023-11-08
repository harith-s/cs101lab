#include <iostream>
using namespace std;
bool leap(int y)  {
    if (((y % 100 != 0) && ((y % 4) == 0)) || (y%400 ==0)) return true;
	else return false;
}


struct date{
    int day, month, year;
    date(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y){}
    bool isvalid() {
            switch(month){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if ((day > 0) && (day <= 31)) return true;
                    else return false;
                    break;
                case 2:
                    if (leap(year)){
                        if ((day > 0) && (day <= 29)) return true;
                        else return false;
                    }
                    else {
                        if ((day > 0) && (day <= 28)) return true;
                        else return false;
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if ((day > 0) && (day <= 30)) return true;
                    else return false;
                    break;
                default :
                    return false;
            }
        
    }

    
};

istream & operator >> (istream & ist, date & d){
    ist >> d.day >> d.month >> d.year;
    return ist;
}
int main() {
    while (true){
        date d;
        cin >> d;
        cout << d.day <<d.month << d.year; cout << endl;

        cout << d.isvalid() << endl;
    }


}