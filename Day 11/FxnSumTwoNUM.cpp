#include <iostream>
using namespace std;
int sum(int n1, int n2)
{
    int sum;
    sum = n1 + n2;
    return sum;
}
int main()
{
    int n1, n2;
    cout << "enter two numbers";
    cin >> n1 >> n2;
    cout << "the sum of the entered number is :" << sum(n1, n2);
    return 0;
}