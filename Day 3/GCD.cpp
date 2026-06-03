#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int n1, n2, g;
    cout << "enter two numbere";
    cin >> n1 >> n2;
    g = gcd(n1, n2);
    cout << "GCD of them is :" << g;
    return 0;
}
/*time complexiety -> O()
space complexiety -> O(1)
*/