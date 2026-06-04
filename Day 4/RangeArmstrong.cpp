#include <iostream>
using namespace std;
int arm(int n)
{
    int r, sum = 0, t;
    t = n;
    for (n = n; n > 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + r * r * r;
    }
    if (t == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n1, n2, c;
    cout << "enter the range n1 and n2 :";
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (arm(i))
            cout << i << " ";
        else
            continue;
    }
    return 0;
}