#include <iostream>
using namespace std;
int findLCM(int a, int b)
{
    int maxNum = (a > b) ? a : b;
    while (true)
    {
        if (maxNum % a == 0 && maxNum % b == 0)
            return maxNum;
        ++maxNum;
    }
}
int main()
{
    int num1, num2;
    cout << "enter two numbers :";
    cin >> num1 >> num2;
    cout << "LCM of " << num1 << " and " << num2 << " is " << findLCM(num1, num2) << endl;
    return 0;
}