#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

bool IsPopOrder(const int* push,const int* pop,int length)
{
    bool possible = false;

    if (push!=NULL && pop!=NULL && length>0)
    {
        const int* nextPush = push;
        const int* nextPop = pop;

        stack<int> stackData;

        while (nextPop-pop < length)
        {
            while (stackData.empty() || stackData.top()!=*nextPop)
            {
                if (nextPush-push == length)
                    break;
                stackData.push(*nextPush);
                nextPush++;
            }

            if (stackData.top()!=*nextPop)
                break;

            stackData.pop();
            nextPop++;
        }

        if (stackData.empty() && nextPop-pop == length)
            possible = true;
    }
    return possible;
}
int main()
{

    return 0;
}
