#include <stdio.h>
#include <stdlib.h>

int Partion(int data[],int start,int end)
{
    int key = data[start];
    int first = start;
    int last = end;

    while (first < last)
    {
        while (first < last && data[last]>=key)
            last--;
        data[first] = data[last];

        while (first < last && data[first]<=key)
            first++;
        data[last] = data[first];
    }
    return first;
}

void QuickSort(int data[],int start,int end)
{
    int index = Partion(data,start,end);

    if (index > start)
        QuickSort(data,start,index-1);
    if (index < end)
        QuickSort(data,index+1,end);
}

int main()
{

    return 0;
}
