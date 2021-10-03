#include <iostream>
using namespace std;

int main() {
    int baris = 6;
    int x = 1;

    do {
        int y = baris;
        do {
            cout << "  ";
            y--;
        } while (y > x);
        int i = 1;
        do {
            cout << i << " ";
            i++;
        } while (i <= x);
        cout << endl;
        x++;
    } while (x < baris);
    return 0;
}