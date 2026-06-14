#include <iostream>
using namespace std;
int main()
{
    int a[50], n, e, count = 0;
    cout << " enter the number of elements in the array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i << endl;
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[j] == a[k])
            {
                cout << "duplicate elements " << a[j] << " ";
                count++;
            }
        }
    }
    if (count == 0)
        cout << "no duplicate elements present";
    return 0;
}