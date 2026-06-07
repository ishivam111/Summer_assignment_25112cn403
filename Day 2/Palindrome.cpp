#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, r;
    cout << "enter a number : ";
    cin >> n;
    for (int t = n; t > 0; t = t / 10)
    {
        r = t % 10;
        rev = 10 * rev + r;
    }
    if (rev == n)
        cout << "the entered number is palindrome";
    else
        cout << "the entered number is not palindrome";

    return 0;
}