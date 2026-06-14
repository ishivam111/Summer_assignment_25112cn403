#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, e, count = 0;
    cout << " enter the number of elements in the array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i << endl;
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    cout << "enter element  : ";
    cin >> e;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == e)
        {
            count++;
        }
    }
    printf("the entered element occurs %d times in the arrray", count);
    return 0;
}