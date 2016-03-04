#include <iostream>

using namespace std;

bool VerifySequenceOfBST(int sequence[],int length)
{
    if (sequence == NULL || length <= 0)
        return false;

    int root = sequence[length-1];

    int i;
    for (i = 0;i < length-1;i++)
        if (sequence[i] > root)
            break;

    int j;
    for (j = i;j < length-1;j++)
        if (sequence[i] < root)
            return false;

    bool left = true;
    if (i > 0)
        left = VerifySequenceOfBST(sequence,i);

    bool right = true;
    if (i < length-1)
        right = VerifySequenceOfBST(sequence,length-i-1);

    return left&&right;
}
int main()
{

    return 0;
}
