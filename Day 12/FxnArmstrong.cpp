#include <iostream>
using namespace std;
void armstrong(int n)
{
    int r, sum = 0, t;
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
}
int main()
{
    int n;
    cout << " enter the number :";
    cin >> n;
    armstrong(n);
    return 0;
}