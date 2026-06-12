#include <iostream>
using namespace std;
void fibo(int n)
{
    int a = 0, b = 1, c;
    if (n == 2)
        cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;

    cout << " enter number of terms to be printed ";
    cin >> n;
    fibo(n);
    return 0;
}