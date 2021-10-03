#include <iostream>
using namespace std;

int main() {
    int i=1,j,baris; 
    baris = 6;

    while (i < baris) {
        int j = i;
        while (j >= 1) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}