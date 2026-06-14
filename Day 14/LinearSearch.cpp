#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, e;
    cout << " enter the number of elements in the array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i << endl;
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    cout << "enter element to be searched : ";
    cin >> e;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == e)
        {
            cout << "the element is found at " << j + 1 << "position";
            return 0;
        }
        else
            continue;
    }
    cout << "element is not present in entered array";
    return 0;
}