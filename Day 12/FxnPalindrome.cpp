#include <iostream>
using namespace std;
void palindrome(int n)
{
    int rev = 0, r;
    for (int t = n; t > 0; t = t / 10)
    {
        r = t % 10;
        rev = 10 * rev + r;
    }
    if (rev == n)
        cout << "the entered number is palindrome";
    else
        cout << "the entered number is not palindrome";
}
int main()
{
    int n;
    cout << " enter the number :";
    cin >> n;
    palindrome(n);
    return 0;
}