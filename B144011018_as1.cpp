#include <iostream>
using namespace std;

int main() {
    int position;

    int a, b, c, d, e;
    cout << "Enter the memory position: ";
    cin >> a;

    b = (a / (32 * 24 * 8));
    c = (a % (32 * 24 * 8)) / (32 * 24);
    d = (a % (32 * 24)) / 32;
    e = (a % (32 * 24)) % 32;

    cout << "The position corresponds to\n";
    cout << "Batch: " << b << endl;
    cout << "Image: " << c << endl;
    cout << "Row: " << d << endl;
    cout << "Column: " << e << endl;

    return 0;
}