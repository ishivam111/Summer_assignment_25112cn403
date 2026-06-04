#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, t;
    cout << "enter a number :";
    cin >> n;
    t = n;
    for (n = n; n > 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + r * r * r;
    }
    if (t == sum)
        cout << "the entered number is armstrong :";
    else
        cout << "entered number is not armstrong";
    return 0;
}
