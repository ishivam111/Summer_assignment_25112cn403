#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, r;
    cout << "enter a number : ";
    cin >> n;
    for (n = n; n > 0; n = n / 10)
    {
        r = n % 10;
        rev = 10 * rev + r;
    }
    cout << "the reverse of the entered number is : " << rev;
    return 0;
}
/*  time complexiety  -> O(n)C
    space complexiety -> O(0)*/