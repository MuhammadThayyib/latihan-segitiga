#include <iostream>
using namespace std;  
int main() 
{   
    int i,j,baris; 
    baris = 6;   

    for( i = 1; i < baris; i++) { 
        for( j=i;j >= 1; j--) 
        { 
            cout << j << " "; 
        } 
            cout << endl;  
    } 

return 0; 
}