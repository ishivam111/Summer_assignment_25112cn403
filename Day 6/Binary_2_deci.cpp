#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, r, deci = 0;
    cout << " enter the binary number :";
    cin >> n;
    for (int i = 0; n > 0; i++)
    {
        r = n % 10;
        deci = deci + r * pow(2, i);
        n = n / 10;
    }
    cout << " the decimal form of number is :" << deci;
    return 0;
}
/* time complexiety O(n)
   space complexiety O(1)
*/