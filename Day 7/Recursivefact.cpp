#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    cout << " the factorial of the number is :" << fact(n);
    return 0;
}
/* time complexiety O(n)
   space complexiety O(1)
*/