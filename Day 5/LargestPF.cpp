#include <iostream>
using namespace std;
int prime(int n)
{
    int count = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n, s = 2;

    cout << "enter an natural number : ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (prime(i))
                if (i > s)
                    s = i;
        }
    }
    cout << "the largest prime factor is : " << s;
    return 0;
}
