#include <iostream>

using namespace std;

int NumberOf1(int number)
{
    int count = 0;

    while (number)
    {
        count++;
        number = (number-1)&number;
    }

    return count;
}

int main()
{

    return 0;
}
