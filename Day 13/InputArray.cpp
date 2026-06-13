#include <iostream>
using namespace std;
int main()
{
    int a[30], n;
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
        cout << " a [" << j << "]";
    }
    return 0;
}