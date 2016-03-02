#include <iostream>

using namespace std;

int MinInOrder(int* numbers,int index1,int index2)
{
    int result = numbers[index1];

    for (int i = index1;i <= index2;i++)
    {
        if (numbers[i] < result)
            result = numbers[i];
    }

    return result;
}

int Min(int* numbers,int length)
{
    int index1= 0;
    int index2 = length-1;
    int midIndex = index1;

    while (numbers[index2] <= numbers[index1])
    {
        if (index2-index1 == 1)
        {
            midIndex = index2;
            break;
        }

        midIndex = (index2-index2)/2;

        if (numbers[index1] == numbers[index2] &&
            numbers[index1] == numbers[midIndex])
                return MinInOrder(numbers,index1,index2);


        if (numbers[midIndex] >= numbers[index1])
            index1 = midIndex;
        else
            index2 = midIndex;
    }

    return numbers[midIndex];
}
int main()
{

    return 0;
}
