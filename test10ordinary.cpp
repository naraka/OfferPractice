#include <iostream>

using namespace std;

int NumberOf1(int number)
{
    int count = 0;
    unsigned int flag = 1;

    while (flag)
    {
        if (number & flag)
            count++;
        flag = flag << 1;
    }

    return count;
}
int main()
{
    
    return 0;
}
