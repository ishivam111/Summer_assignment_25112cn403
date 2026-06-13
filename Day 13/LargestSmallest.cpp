#include <iostream>
using namespace std;
int main()
{
    int a[30], n, l, s;
    cout << "enter number of elements in array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << endl;
        cout << " a[" << i << "]";
        cin >> a[i];
    }
    l = a[0];
    s = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > l)
            l = a[j];
        if (a[j] < s)
            s = a[j];
    }
    cout << "the largest element is :" << l << endl
         << "the smallest element is :" << s;
    return 0;
}
