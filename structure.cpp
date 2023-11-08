#include <iostream>
using namespace std;
struct book {
	static int count;
	int bookcode;
	char title[100];
	book() {
		count++;
	}
};
int book::count = 0;
int main() {
	book book1;
	book1 = {101, "hi"};
	book book2 = {102, "helllo"};
	//cout << book1;
	//cout << endl << book2 << endl;
	cout << book::count;
}

