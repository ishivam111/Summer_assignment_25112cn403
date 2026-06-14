#include <iostream>
using namespace std;
int main()
{
    int a[50], n, l, t;
    cout << "enter the number of elements to be searched :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d =\n a[%d] =  ", i + 1, i);
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        l = a[j];
        for (int k = j + 1; k < n; k++)
        {
            if (a[j] < a[k])
            {
                t = a[j];
                a[j] = a[k];
                a[k] = t;
            }
        }
    }
    cout << "the second largest element is : " << a[1];
    return 0;
}