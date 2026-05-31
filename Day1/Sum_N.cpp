#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter a number: ";
    cin >> n;
    sum = (n / 2) * (2 + (n - 1));
    cout << "value of sum is= " << sum;
    return 0;
}

/*time complexity ->  O(1)
space complexity  ->  0(1)*/