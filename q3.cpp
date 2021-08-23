#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << " Enter the number of rows : ";
    cin >> z;
    for (x = 0; x <= z; x++)
    {
        for (y = 1; y <= z - x; y++)
            cout << " ";
        for (y = 1; y <= 2 * x - 1; y++)
            cout << "*";
        cout << endl;
    }
    for (x = z - 1; x >= 1; x--)
    {
        for (y = 1; y <= z- x; y++)
            cout << " ";
        for (y = 1; y <= 2 * x - 1; y++)
            cout << "*";
        cout << endl;;
    }
}