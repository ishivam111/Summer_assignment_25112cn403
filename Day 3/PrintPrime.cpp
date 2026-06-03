#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter a range n1 to n2: " << endl;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        int count = 0;

        for (int j = 2; j <= (i + 1) / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            cout << i;
    }
    return 0;
}
/*
time complexiety -> O(n)
space complexiety -> O(1)
*/