#include <iostream>
using namespace std;
int rev(int n, int re = 0)
{
    if (n == 0)
        return re;
    return rev(n / 10, re * 10 + n % 10);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Reverse of the given number is: " << rev(n);
    return 0;
}
