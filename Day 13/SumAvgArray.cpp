#include <iostream>
using namespace std;
int main()
{
    int a[30], n, sum = 0, avg;
    cout << "enter number of elements in array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << endl;
        cout << " a[" << i << "]" << "= ";
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum = sum + a[j];
    }
    avg = sum / n;
    cout << " the sum of the entered elements is :" << sum << endl
         << "and the average of the entered elements is " << avg << endl;
    cout << "THANK YOU TOH BOL DE🙃";
    return 0;
}
