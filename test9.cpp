#include <iostream>

using namespace std;

long long Fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 0)
        return 1;
    
    long long f1 = 0;
    long long f2 = 1;
    for (int i = 2;i <= n;i++)
    {
        f2 = f1+f2;
        f1 = f2;
    }
    
}
int main()
{

    return 0;
}
