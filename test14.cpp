
#include <iostream>
#include <cstring>

using namespace std;

void reOrderOddEven(int* pData,int length)
{
    if (pData == NULL
        || length <= 0)
        return;

    int index1 = 0;
    int index2 = length-1;

    while (index1 < index2)
    {
        while (index1 < index2 &&
               pData[index1]%2 == 1)
            index1++;
        while (index1 < index2
               && pData[index2]%2 == 0)
            index2--;

        if (index1 < index2)
        {
            int temp = pData[index1];
            pData[index1] = pData[index2];
            pData[index2] = temp;
        }
    }
}
int main()
{

    return 0;
}
