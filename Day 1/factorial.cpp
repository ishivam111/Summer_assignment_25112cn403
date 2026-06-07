#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1, i = 1;
    cout << "enter a number : ";
    cin >> n;
    while (i <= n)
    {
        fact = fact * i++;
    }
    cout << "factorial of th number is = " << fact;
    return 0;
}
/*time complexity -> O(n)
  space complexiety -> O(n)*/