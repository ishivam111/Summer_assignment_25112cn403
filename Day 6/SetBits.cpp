#include <iostream>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
            count++;

        n = n / 2;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of set bits = " << setBits(n);
    return 0;
}
/* time complexiety O(n)
   space complexiety O(1)
*/