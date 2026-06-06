#include <iostream>
using namespace std;
int main()
{
    int b, e;
    cout << "enter base :";
    cin >> b;
    cout << "enter exponent :";
    cin >> e;
    int i = e;
    while (i > 1)
    {
        b = b * b;
        i--;
    }
    cout << b;
    return 0;
}
