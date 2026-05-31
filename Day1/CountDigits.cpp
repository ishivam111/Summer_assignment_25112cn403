#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter the number : ";
    cin >> n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "the number of digits in n is :" << count;
    return 0;
}
/*time complexity -> O(n)
  space complexiety -> O(n)*/