#include <iostream>
using namespace std;
int main()
{
    int a[30], n, even = 0, odd = 0;
    cout << "enter number of elements in array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << endl;
        cout << " a[" << i << "]";
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "odd numbers = " << odd << endl
         << "even numbers = " << even;
    return 0;
}