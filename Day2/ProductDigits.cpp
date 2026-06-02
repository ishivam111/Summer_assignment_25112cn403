#include <iostream>
using namespace std;
int main()
{
    int n, p = 1, r;
    cout << "enter a number : ";
    cin >> n;
    for (n = n; n > 0; n = n / 10)
    {
        r = n % 10;
        p = p * r;
    }
    cout << "the product of digits of the number is : " << p;
    return 0;
}
/*  time complexiety  -> O(n)C
    space complexiety -> O(0)*/