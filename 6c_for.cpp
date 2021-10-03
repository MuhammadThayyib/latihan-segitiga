#include <iostream>
using namespace std;

int main()
{
    int baris = 5;
    for (int x = 1; x <= baris; x++)
    {
        for (int y = baris; y > x; y--)
        {
            cout << "  ";
        }
        for (int i = 1; i <= x; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}