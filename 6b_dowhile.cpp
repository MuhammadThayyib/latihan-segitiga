#include <iostream>
using namespace std;

int main() {
    int i=1,j,baris; 
    baris = 6;

    do {
        int j = i;
        do {
            cout << j << " ";
            j--;
        } while (j >= 1);
        cout << endl;
        i++;
    } while (i < baris);

    return 0;
}