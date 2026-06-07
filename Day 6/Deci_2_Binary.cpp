#include <iostream>
using namespace std;
int main()
{
    int b[50], n, i;
    cout << "enter the number in deciml : ";
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        b[i] = n % 2;
        n = n / 2;
    }
    cout << " the binary form of give number is : ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << b[j];
    }

    return 0;
} /* time complexiety O(n)
    space complexiety O(1)
 */