#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter number of rows or columns  of half pyramid pattern :";

    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}