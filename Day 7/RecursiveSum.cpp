#include <iostream>
using namespace std;
// program to print sum of digits of a number
int sum(int n, int s = 0)
{
    if (n == 0)
        return s;
    return sum(n / 10, s + n % 10);
}
int main()
{
    int n;
    cout << "enter a number :";
    cin >> n;
    cout << "the sum of digits is :" << sum(n);
    return 0;
}
/* time complexiety O(n)
   space complexiety O(1)
*/