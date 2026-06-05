#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1, i = 1;
    while (i <= n)
    {
        fact = fact * i++;
    }
    return fact;
}
int main()
{
    int n, t, sum = 0;
    cout << " enter a number";
    cin >> n;
    for (t = n; t > 0; t = t / 10)
    {
        int r = t % 10;
        sum += fact(r);
    }
    if (sum == n)
        cout << "entered number is a strong number";
    else
        cout << " entered number is not a strong number";
    return 0;
}