#include <iostream>
using namespace std;

int main() {
    int baris = 5, i = 1;
    while (i <= baris) {
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}