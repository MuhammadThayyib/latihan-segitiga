#include <iostream>
using namespace std;

int main()
{
    int baris = 5;
    for(int i = 1; i <= baris; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}