#include <iostream>
int main()
{
    int n, t, sum = 0;

    std::cout << "enter an natural number : ";
    std::cin >> n;
    t = n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == t)
        std ::cout << " the entered number is a perfect number";
    else
        std ::cout << "entered number is not a perfect number";
    return 0;
}