#include <iostream>
using namespace std;

int main() {
    int baris = 5;
    int x = 1;
    while (x <= baris) {
        int y = baris;
        while (y > x) {     
            cout << "  ";
            y--;
            
        }
        int i = 1;  
        while (i <= x) {
            cout << i << " ";
            i++; 
        }
        cout << endl;
        x++;
    }
    
    return 0;
}