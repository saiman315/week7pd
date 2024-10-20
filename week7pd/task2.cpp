#include <iostream>
using namespace std;

void UpperPart(int rowsize) {
    for (int i = 1; i <= rowsize; i++) {
        for (int j = 1; j <= rowsize - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void LowerPart(int rowsize) {
    for (int a = rowsize - 1; a >= 1; a--) {
        for (int b = 1; b <= rowsize - a; b++) {
            cout << " ";
        }
        for (int c = 1; c <= a; c++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rowsize;

    cout << "Enter desired number of rows: ";
    cin >> rowsize;
    rowsize = rowsize/2 ;

    UpperPart(rowsize);
    LowerPart(rowsize);
}
