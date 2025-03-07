#include <iostream>

int main()
{
    int n, sum;
    std::cin >> n; 

    sum = ((n+1)*n)/2;

    for(int i = 1; i < n; i++)
    {
        std::cout << i << " + ";
    }

    std::cout << n << " = " << sum;

    return 0;
}