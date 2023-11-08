#include <iostream>
#include <fstream>
using namespace std;
struct book{
    char a[20]; double price; int sno; int patron;
    book() {
        a[0] = 0 ; price = 0; sno = 0; patron = 0;   
    }
    book(const char b[20], double nprice, int nsno, int npatron) {
        for (int i = 0; i < 20 ; i++){
            a[i] = b[i];
        }
        price = nprice; sno = nsno; patron = npatron;

    }
    void operator = (const book & b) {
        int i ;
        for (i = 0; i < 20 && b.a[i] != 0; i++){
            a[i] = b.a[i];
        }
        a[i] = 0;
        price = b.price; sno = b.sno; patron = b.patron;
    }

};
bool comp(char a[], char b[]){
    int i = 0;
    while (true){
        if (a[i]!=b[i]) return false;
        else if (a[i] == 0 && b[i] == 0) return true;
        else if (a[i] == 0) return false;
        else if (b[i] == 0) return false;
        i++;
    }
}
int main() {
    int n ; cin >> n; const int k = n;
    book lib[k];
    for (int i = 0; i < n; i++){
        char author[20];
        cin >> author;
        double price; int sno, patron;
        cin >> price >> sno >> patron;
        book temp(author, price, sno, patron);
        lib[i] = temp;
    }

    char command;
    cin >> command;
    while (true){
    switch(command){
        case 'b':
            cout << "which book do you want to borrow?";
            char b[20];
            cin >> b;
            int i;
            for (i = 0; i < k; i++){
                if(comp(lib[i].a, b)) break;
            }
            if (i == k) cout << "book not found";
            else {
                if (lib[i].patron !=0) cout << "sorry book already taken";
                else {
                    cout << " please enter your patron number : ";
                    cin >> lib[i].patron; 
                }
            }
            break;
        case 'r':
            cout << "enter the book sno you want to return" << endl;
            int rsno;
            cin >> rsno;
            int j;
            for (j = 0; j < k; j++){
                if (lib[j].sno == rsno ) {
                break;
            }
        }
            lib[j].patron = 0;
    }
    cin >> command;
    }
        
    

}