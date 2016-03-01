#include <stdio.h>
#include <stdlib.h>

#define OLDESTAGE 99

void SortAges(int ages[],int length)
{
    if (length <= 0)
        return;

    int timesOfAge[OLDESTAGE+1];
    int i;
    for (i = 0;i < OLDESTAGE+1;i++)
        timesOfAge[i] = 0;

    for (i = 0;i < length;i++)
    {
        timesOfAge[ages[i]]++;
    }

    int index = 0;
    int j;
    for (i = 0;i < OLDESTAGE;i++)
        for (j = 0;j < timesOfAge[i];j++)
            ages[index++] = i;

}
int main()
{

    return 0;
}
