#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter a number: ";
    cin >> n;
    if (n == 1)
    {
        cout << "entered number is a coprime";
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        cout << "entered number is a prime number ";
    else
        cout << "entered number is not a prime number";
    return 0;
}
/*
time complexiety -> O(n)
space complexiety -> O(1)
*/