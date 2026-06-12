#include <iostream>
using namespace std;
void pf(int n)
{
    int t, sum = 0;
    t = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == t)
        cout << " the entered number is a perfect number";
    else
        cout << "entered number is not a perfect number";
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    pf(n);
    return 0;
}
